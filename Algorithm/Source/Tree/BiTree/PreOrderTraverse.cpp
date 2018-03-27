#include "../../../Header/Tree/BiTree.h"

/*
 * 采用二叉链表存储结构，Visit是对结点操作的应用函数。
 * 先序遍历二叉树T，对每个结点调用函数Visit一次且仅一次
 * 一旦Visit失败，则操作失败。
 */
Status PreOrderTraverse(BiTree T, Status(*Visit)(TElemType e))
{
	if (T)
	{
		if (Visit(T->data))
		{
			if (PreOrderTraverse(T->lchild, Visit))
			{
				if (PreOrderTraverse(T->rchild, Visit))
				{
					return OK;
				}
			}
		}
		return ERROR;
	}
	else
	{
		return OK;
	}
}	// PreOrderTraverse