#pragma once

#include "predefine.h"

// TElemType��ʾһ��������Ԫ��
typedef int TElemType;

// �������Ķ�������洢��ʾ
typedef struct BiTNode {
	TElemType data;
	struct BiTNode *lchild, *rchild;	// ���Һ���ָ��
}BiTNode, *BiTree;

// ���������ĺ���ԭ��˵��

/*
 * �������������������н���ֵ��һ���ַ������ո��ַ���ʾ����
 * ������������ʾ�Ķ�����T��
 */
Status CreateBiTree(BiTree &T);

/*
 * ���ö�������洢�ṹ��Visit�ǶԽ�������Ӧ�ú�����
 * �������������T����ÿ�������ú���Visitһ���ҽ�һ��
 * һ��Visitʧ�ܣ������ʧ�ܡ�
 */
Status PreOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

/*
 * ���ö�������洢�ṹ��Visit�ǶԽ�������Ӧ�ú�����
 * �������������T����ÿ�������ú���Visitһ���ҽ�һ��
 * һ��Visitʧ�ܣ������ʧ�ܡ�
 */
Status InOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

/*
 * ���ö�������洢�ṹ��Visit�ǶԽ�������Ӧ�ú�����
 * �������������T����ÿ�������ú���Visitһ���ҽ�һ��
 * һ��Visitʧ�ܣ������ʧ�ܡ�
 */
Status PostOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

/*
 * ���ö�������洢�ṹ��Visit�ǶԽ�������Ӧ�ú�����
 * �������������T����ÿ�������ú���Visitһ���ҽ�һ��
 * һ��Visitʧ�ܣ������ʧ�ܡ�
 */
Status LevelOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

/*
 * �򵥵�Visit����
 */
Status PrintElement(TElemType e)
{
	printf("%d", e);
	return OK;
}