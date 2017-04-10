#include "SqQueue.h"

// ����һ���ն���Q
Status InitQueue(SqQueue &Q)
{
	Q.base = (QElemType *)malloc(MAXQSIZE * sizeof(QElemType));
	if (!Q.base)
	{
		exit(OVERFLOW);	// �洢����ʧ��
	}
	Q.front = Q.rear = 0;
	return OK;
}