#include "../../../Header/Queue/LinkQueue.h"

// 构造一个空队列Q
Status InitQueue(LinkQueue &Q)
{
	Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
	if (!Q.front)
	{
		exit(OVERFLOW);
	}
	Q.front->next = NULL;
	return OK;
}