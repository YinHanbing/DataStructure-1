#include "LinkQueue.h"

/*
 * �����в��գ���ɾ��Q�Ķ�ͷԪ�أ���e������ֵ��������OK��
 * ���򷵻�ERROR
 */
Status DeQueue(LinkQueue &Q, QElemType &e)
{
	if (Q.front==Q.rear)
	{
		return ERROR;
	}
	QueuePtr p = Q.front->next;
	e = p->data;
	Q.front->next = p->next;
	if (Q.rear==p)
	{
		Q.rear = Q.front;
	}
	free(p);
	return OK;
}