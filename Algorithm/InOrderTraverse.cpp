#include "BiTree.h"
#include "SqStack.h"

/*
 * ���ö�������洢�ṹ��Visit�ǶԽ�������Ӧ�ú�����
 * �������������T����ÿ�������ú���Visitһ���ҽ�һ��
 * һ��Visitʧ�ܣ������ʧ�ܡ�
 */
Status InOrderTraverse(BiTree T, Status(*Visit)(TElemType e), int method)
{
	SqStack S;
	BiTree p = T;
	switch (method)
	{
	case 1:									// ����һ
		InitStack(S);
		Push(S, T);		// ��ָ���ջ
		while (!StackEmpty(S))
		{
			while (GetTop(S, p) && p)		// �����ߵ���ͷ
			{
				Push(S, p->lchild);
			}
			Pop(S, p);						// ��ָ����ջ
			if (!StackEmpty(S))				// ���ʽ�㣬�����Ʋ�
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
	case 2:									// ������
		InitStack(S);
		while (p || !StackEmpty(S))
		{
			if (p)		// ��ָ���ջ������������
			{
				Push(S, p);
				p = p->lchild;
			}			// ��ָ����ջ������������
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