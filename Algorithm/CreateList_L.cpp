#include "LinkList.h"

// ��λ������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L
void CreateList_L(LinkList &L, int n)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;	// �Ƚ���һ����ͷ���ĵ�����

	for (int i = n; i > 0; --i)
	{
		LinkList p = (LinkList)malloc(sizeof(LNode));	// �����½��
		scanf("%d", &p->data);	// ����Ԫ��ֵ

		// ���뵽��ͷ
		p->next = L->next;
		L->next = p;
	}
}	// CreateList_L