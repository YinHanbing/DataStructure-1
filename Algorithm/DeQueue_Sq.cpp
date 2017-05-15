#include "SqQueue.h"

/*
 * 若队列不空，则删除Q的队头元素，用e返回其值，并返回OK；
 * 否则返回ERROR
 */
Status DeQueue(SqQueue &Q, QElemType &e)
{
	if (Q.front == Q.rear)
	{
		return ERROR;	// 队列空
	}
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXQSIZE;
	return OK;
}