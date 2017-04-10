#include "LinkQueue.h"

// 销毁队列Q，Q不再存在
Status DestroyQueue(LinkQueue &Q)
{
	while (Q.front)
	{
		Q.rear = Q.front->next;
		free(Q.front);
		Q.front = Q.rear;
	}
	return OK;
}