#include "SqQueue.h"

// 构造一个空队列Q
Status InitQueue(SqQueue &Q)
{
	Q.base = (QElemType *)malloc(MAXQSIZE * sizeof(QElemType));
	if (!Q.base)
	{
		exit(OVERFLOW);	// 存储分配失败
	}
	Q.front = Q.rear = 0;
	return OK;
}