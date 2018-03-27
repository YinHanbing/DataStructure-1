#include "../../../Header/Queue/SqQueue.h"

// ����Ԫ��eΪQ���µĶ�βԪ��
Status EnQueue(SqQueue &Q, QElemType e)
{
	if ((Q.rear + 1) % MAXQSIZE == Q.front)
	{
		return ERROR;	// ������
	}
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXQSIZE;
	return OK;
}