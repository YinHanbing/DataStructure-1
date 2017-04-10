#include "List.h"

Status main()
{
	SqList L;
	int i;
	ElemType e;

	InitList_Sq(L);

	// 向SqList输入5个元素
	printf("请向SqList中输入%d个元素：\n", L.listsize);
	for (i = 0; i < L.listsize; i++)
	{
		printf("请输入第%d个元素：", i + 1);
		scanf("%d", &L.elem[i]);
		++L.length;
	}

	// 打印SqList中的元素
	printf("----------------------------\n");
	printf("SqList中的元素为：\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", *(L.elem + i));
	}
	printf("\n");
	printf("----------------------------\n");
	// 在第i个位置前插入e并打印
	printf("请输入将在第几个位置前插入元素：");
	scanf("%d", &i);
	printf("请输入要插入的元素：");
	scanf("%d", &e);
	if (!ListInsert_Sq(L, i, e))
	{
		printf("无法在第%d个位置前插入元素", i);
		printf("\n");
		exit(ERROR);
	}
	printf("插入成功：\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", L.elem[i]);
	}
	printf("\n");
	printf("----------------------------\n");

	// 删除第i个位置的元素后，打印SqList中的元素并用e返回删除的元素
	printf("请输入要删除元素的位置：");
	scanf("%d", &i);
	if (!ListDelete_Sq(L, i, e))
	{
		printf("无法删除第%d个位置的元素", i);
		printf("\n");
		exit(ERROR);
	}
	printf("删除成功：\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", *(L.elem + i));
	}
	printf("\n");
	printf("e = %d\n", e);

	return OK;
}