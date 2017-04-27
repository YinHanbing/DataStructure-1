#include "LinkList.h"

// �ڴ�ͷ���ĵ������Ա�L�У�ɾ����i��Ԫ�أ�����e������ֵ
Status ListDelete_L(LinkList &L, int i, ElemType &e)
{
	LinkList p = L;
	int j = 0;

	// Ѱ�ҵ�i��Ԫ�ؽ�㣬����pָ����ǰ��
	while (p->next && j < i - 1)
	{
		p = p->next;
		++j;
	}

	// ɾ��λ�ò�����
	if (!(p->next)||j>i-1)
	{
		return ERROR;
	}

	// ɾ�����ͷŽ��
	LinkList q = p->next;
	p->next = q->next;
	e = q->data;
	free(q);
	return OK;
}	// ListDelete_L