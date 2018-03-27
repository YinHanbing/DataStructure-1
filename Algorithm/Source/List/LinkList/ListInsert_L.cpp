#include "../../../Header/List/LinkList.h"

// �ڴ�ͷ���ĵ������Ա�L�е�i��λ��֮ǰ����Ԫ��e
Status ListInsert_L(LinkList &L, int i, ElemType e)
{
	LinkList p = L;
	int j = 0;

	// Ѱ�ҵ�i-1�����
	while (p && j < i - 1)
	{
		p = p->next;
		++j;
	}

	// iС��1���ߴ��ڱ���1
	if (!p || j > i - 1)
	{
		return ERROR;
	}

	LinkList s = (LinkList)malloc(sizeof(LNode));	// �����½��
	s->data = e; s->next = p->next;	// ����L��
	p->next = s;
	return OK;
}	// ListInsert_L