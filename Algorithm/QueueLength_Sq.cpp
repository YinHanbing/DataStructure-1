#include "SqQueue.h"

// ����Q��Ԫ�ظ����������еĳ���
Status QueueLength(SqQueue Q) 
{
	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}