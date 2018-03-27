#include "../../../Header/Tree/BiThrTree.h"

// 中序遍历二叉树T，并将其中序线索化，Thrt指向头结点。
Status InOrderThreading(BiThrTree & Thrt, BiThrTree T)
{
	if (!(Thrt = (BiThrTree)malloc(sizeof(BiThrNode))))
	{
		exit(OVERFLOW);
	}

	// 建头结点
	Thrt->LTag = Link;
	Thrt->RTag = Thread;

	Thrt->rchild = Thrt;		// 右指针回指
	// 若二叉树空，则左指针回指
	if (!T)
	{
		Thrt->lchild = Thrt;
	}
	else
	{
		Thrt->lchild = T;
		BiThrTree pre = Thrt;
		InThreading(T);			// 中序遍历进行中序线索化
		pre->rchild = Thrt;
		pre->RTag = Thread;		// 最后一个结点线索化
		Thrt->rchild = pre;
	}
	return OK;
}	// InOrderThreading