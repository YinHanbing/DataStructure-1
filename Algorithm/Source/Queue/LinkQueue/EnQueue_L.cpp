#include "../../../Header/Queue/LinkQueue.h"

// ����Ԫ��eΪQ���µĶ�βԪ��
Status EnQueue(LinkQueue &Q, QElemType e)
{
	QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
	if (!p)
	{
		exit(OVERFLOW);	// �洢����ʧ��
	}
	p->data = e;
	p->next = NULL;
	Q.rear->next = p;
	Q.rear = p;
	return OK;
}