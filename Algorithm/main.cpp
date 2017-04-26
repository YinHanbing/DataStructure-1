#include "SqList.h"
#include "LinkList.h"
#include "BiTree.h"

// 验证SqList相关算法的主函数
Status main()
{
	SqList L;
	int i;
	ElemType e;

	InitList_Sq(L);

	// 向SqList输入5个元素
	printf("请向SqList中输入%d个元素：", L.listsize);		// 每个元素间用空格隔开
	for (i = 0; i < L.listsize; i++)
	{
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

/*
// 验证LinkList相关算法的主函数
Status main()
{
	LinkList L, p;
	int i;
	ElemType e;

	printf("请输入要创建链式线性表元素的个数：");
	scanf("%d", &i);
	printf("请倒序输入%d个元素：", i);			// 每个元素间用空格隔开

	// 创建线性链表
	CreateList_L(L, i);

	// 打印LinkList中的元素
	printf("----------------------------\n");
	printf("LinkList中的元素为：\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	printf("----------------------------\n");

	// 在第i个位置前插入e并打印
	printf("请输入将在第几个位置前插入元素：");
	scanf("%d", &i);
	printf("请输入要插入的元素：");
	scanf("%d", &e);
	if (!ListInsert_L(L, i, e))
	{
		printf("无法在第%d个位置前插入元素", i);
		printf("\n");
		exit(ERROR);
	}
	printf("插入成功：\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	printf("----------------------------\n");

	// 删除第i个位置的元素后，打印LinkList中的元素并用e返回删除的元素
	printf("请输入要删除元素的位置：");
	scanf("%d", &i);
	if (!ListDelete_L(L, i, e))
	{
		printf("无法删除第%d个位置的元素", i);
		printf("\n");
		exit(ERROR);
	}
	printf("删除成功：\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	printf("e = %d\n", e);
	printf("----------------------------\n");

	// 获取LinkList中的第i个元素
	printf("请输入想要获取第几个元素：");
	scanf("%d", &i);
	if (!GetElem_L(L, i, e))
	{
		printf("无法获取第%d个位置的元素", i);
		printf("\n");
		exit(ERROR);
	}
	printf("获取成功：\n");
	printf("e = %d\n", e);

	return OK;
}
*/

/*
// 简单的Visit函数
Status PrintElement(TElemType e)
{
	printf("%c", e);
	return OK;
}

// 验证BiTree相关算法的主函数
// 输入:"ABC  DE G  F   "
Status main()
{
	BiTree T;
	printf("请创建一个二叉树：");
	CreateBiTree(T);	// 创建一个二叉树
	printf("先序遍历：");
	PreOrderTraverse(T, PrintElement);
	printf("\n");
	printf("中序遍历（方法一）：");
	InOrderTraverse(T, PrintElement, 1);
	printf("\n");
	printf("中序遍历（方法二）：");
	InOrderTraverse(T, PrintElement, 2);
	printf("\n");
	return OK;
}
*/