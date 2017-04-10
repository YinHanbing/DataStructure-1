#include "List.h"

Status main()
{
	SqList L;
	int i;
	ElemType e;

	InitList_Sq(L);

	// ��SqList����5��Ԫ��
	printf("����SqList������%d��Ԫ�أ�\n", L.listsize);
	for (i = 0; i < L.listsize; i++)
	{
		printf("�������%d��Ԫ�أ�", i + 1);
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