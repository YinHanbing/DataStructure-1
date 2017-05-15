#include "BiTree.h"
#include "SqStack.h"

/*
 * 采用二叉链表存储结构，Visit是对结点操作的应用函数。
 * 中序遍历二叉树T，对每个结点调用函数Visit一次且仅一次
 * 一旦Visit失败，则操作失败。
 */
Status InOrderTraverse(BiTree T, Status(*Visit)(TElemType e), int method)
{
	SqStack S;
	BiTree p = T;
	switch (method)
	{
	case 1:									// 方法一
		InitStack(S);
		Push(S, T);		// 根指针进栈
		while (!StackEmpty(S))
		{
			while (GetTop(S, p) && p)		// 向左走到尽头
			{
				Push(S, p->lchild);
			}
			Pop(S, p);						// 空指针退栈
			if (!StackEmpty(S))				// 访问结点，向右移步
			{
				Pop(S, p);
				if (!Visit(p->data))
				{
					return ERROR;
				}
				Push(S, p->rchild);
			}//	if
		}// while
		break;
	case 2:									// 方法二
		InitStack(S);
		while (p || !StackEmpty(S))
		{
			if (p)		// 根指针进栈，遍历左子树
			{
				Push(S, p);
				p = p->lchild;
			}			// 根指针退栈，遍历右子树
			else
			{
				Pop(S, p);
				if (!Visit(p->data))
				{
					return ERROR;
				}
				p = p->rchild;
			}// else
		}// while
		break;
	default:
		break;
	}
	return OK;
}	// InOrderTraverse