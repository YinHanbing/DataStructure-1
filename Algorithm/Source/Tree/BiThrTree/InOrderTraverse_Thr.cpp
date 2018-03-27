#include "../../../Header/Tree/BiThrTree.h"

/*
 * T指向头结点，头结点的左链lchild指向根节点，可参见线索化算法。
 * 中序遍历二叉线索树T的非递归算法，对每个数据元素调用函数Visit。
 */
Status InOrderTraverse_Thr(BiThrTree T, Status(*Visit)(TElemType e))
{
	BiThrTree p = T->lchild;			// p指向根节点
	while (p != T)						// 空树或遍历结束时，p == T
	{
		while (p->LTag == Link)
		{
			p = p->lchild;
		}
		if (!Visit(p->data))
		{
			return ERROR;				// 访问其左子树为空的结点
		}
		while (p->RTag == Thread)
		{
			// 访问后继结点
			p = p->rchild;
			Visit(p->data);
		}
		p = p->rchild;
	}
	return OK;
}	// InOrderTraverse_Thr