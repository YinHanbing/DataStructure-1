#include "../../../Header/Tree/BiThrTree.h"

// �������������T��������������������Thrtָ��ͷ��㡣
Status InOrderThreading(BiThrTree & Thrt, BiThrTree T)
{
	if (!(Thrt = (BiThrTree)malloc(sizeof(BiThrNode))))
	{
		exit(OVERFLOW);
	}

	// ��ͷ���
	Thrt->LTag = Link;
	Thrt->RTag = Thread;

	Thrt->rchild = Thrt;		// ��ָ���ָ
	// ���������գ�����ָ���ָ
	if (!T)
	{
		Thrt->lchild = Thrt;
	}
	else
	{
		Thrt->lchild = T;
		BiThrTree pre = Thrt;
		InThreading(T);			// ���������������������
		pre->rchild = Thrt;
		pre->RTag = Thread;		// ���һ�����������
		Thrt->rchild = pre;
	}
	return OK;
}	// InOrderThreading