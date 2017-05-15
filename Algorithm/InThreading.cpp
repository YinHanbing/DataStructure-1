#include "BiThrTree.h"

// 线索化
void InThreading(BiThrTree p)
{
	BiThrTree pre = p;
	if (p)
	{
		InThreading(p->lchild);		// 左子树线索化

		// 前驱线索
		if (!p->lchild)
		{
			p->LTag = Thread;
			p->lchild = pre;
		}

		// 后继线索
		if (!pre->rchild)
		{
			pre->RTag = Thread;
			pre->rchild = p;
		}
		pre = p;					// 保持pre指向p的前驱
		InThreading(p->rchild);		// 右子树线索化
	}
}	// InThreading