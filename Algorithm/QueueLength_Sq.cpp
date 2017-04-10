#include "SqQueue.h"

// 返回Q的元素个数，即队列的长度
Status QueueLength(SqQueue Q) 
{
	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}