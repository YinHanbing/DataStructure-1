#include "LinkList.h"

// 在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
Status ListDelete_L(LinkList &L, int i, ElemType &e)
{
	LinkList p = L;
	int j = 0;

	// 寻找第i个元素结点，并令p指向其前趋
	while (p->next && j < i - 1)
	{
		p = p->next;
		++j;
	}

	// 删除位置不合理
	if (!(p->next)||j>i-1)
	{
		return ERROR;
	}

	// 删除并释放结点
	LinkList q = p->next;
	p->next = q->next;
	e = q->data;
	free(q);
	return OK;
}	// ListDelete_L