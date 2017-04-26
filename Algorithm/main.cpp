#include "SqList.h"
#include "LinkList.h"
#include "BiTree.h"

// ��֤SqList����㷨��������
Status main()
{
	SqList L;
	int i;
	ElemType e;

	InitList_Sq(L);

	// ��SqList����5��Ԫ��
	printf("����SqList������%d��Ԫ�أ�", L.listsize);		// ÿ��Ԫ�ؼ��ÿո����
	for (i = 0; i < L.listsize; i++)
	{
		scanf("%d", &L.elem[i]);
		++L.length;
	}

	// ��ӡSqList�е�Ԫ��
	printf("----------------------------\n");
	printf("SqList�е�Ԫ��Ϊ��\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", *(L.elem + i));
	}
	printf("\n");
	printf("----------------------------\n");

	// �ڵ�i��λ��ǰ����e����ӡ
	printf("�����뽫�ڵڼ���λ��ǰ����Ԫ�أ�");
	scanf("%d", &i);
	printf("������Ҫ�����Ԫ�أ�");
	scanf("%d", &e);
	if (!ListInsert_Sq(L, i, e))
	{
		printf("�޷��ڵ�%d��λ��ǰ����Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("����ɹ���\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", L.elem[i]);
	}
	printf("\n");
	printf("----------------------------\n");

	// ɾ����i��λ�õ�Ԫ�غ󣬴�ӡSqList�е�Ԫ�ز���e����ɾ����Ԫ��
	printf("������Ҫɾ��Ԫ�ص�λ�ã�");
	scanf("%d", &i);
	if (!ListDelete_Sq(L, i, e))
	{
		printf("�޷�ɾ����%d��λ�õ�Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("ɾ���ɹ���\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", *(L.elem + i));
	}
	printf("\n");
	printf("e = %d\n", e);

	return OK;
}

/*
// ��֤LinkList����㷨��������
Status main()
{
	LinkList L, p;
	int i;
	ElemType e;

	printf("������Ҫ������ʽ���Ա�Ԫ�صĸ�����");
	scanf("%d", &i);
	printf("�뵹������%d��Ԫ�أ�", i);			// ÿ��Ԫ�ؼ��ÿո����

	// ������������
	CreateList_L(L, i);

	// ��ӡLinkList�е�Ԫ��
	printf("----------------------------\n");
	printf("LinkList�е�Ԫ��Ϊ��\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	printf("----------------------------\n");

	// �ڵ�i��λ��ǰ����e����ӡ
	printf("�����뽫�ڵڼ���λ��ǰ����Ԫ�أ�");
	scanf("%d", &i);
	printf("������Ҫ�����Ԫ�أ�");
	scanf("%d", &e);
	if (!ListInsert_L(L, i, e))
	{
		printf("�޷��ڵ�%d��λ��ǰ����Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("����ɹ���\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	printf("----------------------------\n");

	// ɾ����i��λ�õ�Ԫ�غ󣬴�ӡLinkList�е�Ԫ�ز���e����ɾ����Ԫ��
	printf("������Ҫɾ��Ԫ�ص�λ�ã�");
	scanf("%d", &i);
	if (!ListDelete_L(L, i, e))
	{
		printf("�޷�ɾ����%d��λ�õ�Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("ɾ���ɹ���\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	printf("e = %d\n", e);
	printf("----------------------------\n");

	// ��ȡLinkList�еĵ�i��Ԫ��
	printf("��������Ҫ��ȡ�ڼ���Ԫ�أ�");
	scanf("%d", &i);
	if (!GetElem_L(L, i, e))
	{
		printf("�޷���ȡ��%d��λ�õ�Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("��ȡ�ɹ���\n");
	printf("e = %d\n", e);

	return OK;
}
*/

/*
// �򵥵�Visit����
Status PrintElement(TElemType e)
{
	printf("%c", e);
	return OK;
}

// ��֤BiTree����㷨��������
// ����:"ABC  DE G  F   "
Status main()
{
	BiTree T;
	printf("�봴��һ����������");
	CreateBiTree(T);	// ����һ��������
	printf("���������");
	PreOrderTraverse(T, PrintElement);
	printf("\n");
	printf("�������������һ����");
	InOrderTraverse(T, PrintElement, 1);
	printf("\n");
	printf("�������������������");
	InOrderTraverse(T, PrintElement, 2);
	printf("\n");
	return OK;
}
*/