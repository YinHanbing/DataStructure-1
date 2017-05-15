#include "LinkQueue.h"

/*
 * 若队列不空，则删除Q的队头元素，用e返回其值，并返回OK；
 * 否则返回ERROR
 */
Status DeQueue(LinkQueue &Q, QElemType &e)
{
	if (Q.front==Q.rear)
	{
		return ERROR;
	}
	QueuePtr p = Q.front->next;
	e = p->data;
	Q.front->next = p->next;
	if (Q.rear==p)
	{
		Q.rear = Q.front;
	}
	free(p);
	return OK;
}