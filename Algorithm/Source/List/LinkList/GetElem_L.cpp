#include "../../../Header/List/LinkList.h"

/*
 * LΪ��ͷ���ĵ������ͷָ��
 * ����i��Ԫ�ش���ʱ����ֵ����e������OK�����򷵻�ERROR
 */
Status GetElem_L(LinkList L, int i, ElemType &e)
{
	// ��ʼ����pָ���һ����㣬jΪ������
	LinkList p = L->next;
	int j = 1;

	// ˳ָ�������ң�֪��pָ���i��Ԫ�ػ�pΪ��
	while (p && j < i)
	{
		p = p->next;
		++j;
	}

	if (!p || j > i)
	{
		return ERROR;	// ��i��Ԫ�ز�����
	}

	e = p->data;	// ȡ��i��Ԫ��
	return OK;
}	// GetElem_L