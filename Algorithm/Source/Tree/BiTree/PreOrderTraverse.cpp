#include "../../../Header/Tree/BiTree.h"

/*
 * ���ö�������洢�ṹ��Visit�ǶԽ�������Ӧ�ú�����
 * �������������T����ÿ�������ú���Visitһ���ҽ�һ��
 * һ��Visitʧ�ܣ������ʧ�ܡ�
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