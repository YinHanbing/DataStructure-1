#include "../../../Header/Queue/SqQueue.h"

// ����Q��Ԫ�ظ����������еĳ���
int QueueLength(SqQueue Q) 
{
	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}