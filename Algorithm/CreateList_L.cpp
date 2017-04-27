#include "LinkList.h"

// 逆位序输入n个元素的值，建立带表头结点的单链线性表L
void CreateList_L(LinkList &L, int n)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;	// 先建立一个带头结点的单链表

	for (int i = n; i > 0; --i)
	{
		LinkList p = (LinkList)malloc(sizeof(LNode));	// 产生新结点
		scanf("%d", &p->data);	// 输入元素值

		// 插入到表头
		p->next = L->next;
		L->next = p;
	}
}	// CreateList_L