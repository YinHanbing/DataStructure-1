#include "../../../Header/List/LinkList.h"

// 在带头结点的单链线性表L中第i个位置之前插入元素e
Status ListInsert_L(LinkList &L, int i, ElemType e)
{
	LinkList p = L;
	int j = 0;

	// 寻找第i-1个结点
	while (p && j < i - 1)
	{
		p = p->next;
		++j;
	}

	// i小于1或者大于表长加1
	if (!p || j > i - 1)
	{
		return ERROR;
	}

	LinkList s = (LinkList)malloc(sizeof(LNode));	// 生产新结点
	s->data = e; s->next = p->next;	// 插入L中
	p->next = s;
	return OK;
}	// ListInsert_L