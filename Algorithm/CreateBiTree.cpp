#include "BiTree.h"

/*
 * �������������������н���ֵ��һ���ַ������ո��ַ���ʾ����
 * ������������ʾ�Ķ�����T��
 */
Status CreateBiTree(BiTree &T)
{
	char ch;
	scanf("%c", &ch);
	if (ch==' ')
	{
		T = NULL;
	}
	else
	{
		if (!(T=(BiTNode *)malloc(sizeof(BiTNode))))
		{
			exit(OVERFLOW);
		}
		T->data = ch;				// ���ɸ����
		CreateBiTree(T->lchild);	// ����������
		CreateBiTree(T->rchild);	// ����������
	}
	return OK;
}