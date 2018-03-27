#include "../../../Header/Queue/SqQueue.h"

// 插入元素e为Q的新的队尾元素
Status EnQueue(SqQueue &Q, QElemType e)
{
	if ((Q.rear + 1) % MAXQSIZE == Q.front)
	{
		return ERROR;	// 队列满
	}
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXQSIZE;
	return OK;
}