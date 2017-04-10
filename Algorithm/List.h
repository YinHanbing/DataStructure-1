#pragma once

#include "predefine.h"

// ElemType表示一个元素
typedef int ElemType;

// 线性表的动态分配顺序存储结构
#define LIST_INIT_SIZE 5		// 线性表存储空间的初始分配量
#define LISTINCREMENT 2			// 线性表存储空间的分配增量
typedef struct {
	ElemType *elem;		// 存储空间基址
	int length;			// 当前长度
	int listsize;		// 当前分配的存储容量（以sizeof(ElemType)为单位）
}SqList;

// 线性表的单链表存储结构
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

// 线性表的静态单链表存储结构
#define MAXSIZE 100	// 链表的最大长度
typedef struct {
	ElemType data;
	int cur;
}component, SLinkList[MAXSIZE];

// 基本操作的函数原型的说明

// 逆位序输入n个元素的值，建立带表头结点的单链线性表L
void CreateList_L(LinkList &L, int n);

/*
* L为带头结点的单链表的头指针
* 当第i个元素存在时，其值赋给e并返回OK，否则返回ERROR
*/
Status GetElem_L(LinkList L, int i, ElemType &e);

// 在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
Status ListDelete_L(LinkList &L, int i, ElemType &e);

// 在带头结点的单链线性表L中第i个位置之前插入元素e
Status ListInsert_L(LinkList &L, int i, ElemType e);

/*
* 已知单链线性表La和Lb的元素按值非递减排列
* 归并La和Lb得到新的单链线性表Lc，Lc的元素也按值非递减排列
*/
void MergeList_L(LinkList &La, LinkList &Lb, LinkList &Lc);

// 将下标为k的空闲结点回收到备用链表
void Free_SL(SLinkList &space, int k);

/*
* 将一维数组space中各分量链成一个备用链表，space[0].cur位头指针，
* '0'表示空指针
*/
void InitSpace_SL(SLinkList &space);

/*
* 在静态单链线性表L中查找第1个值为e的元素
* 若找到，则返回它在L中的位序，否则返回0
*/
int LocateElem_SL(SLinkList S, ElemType e);

// 若备用空间链表非空，则返回分配的结点下标，否则返回0
int Malloc_SL(SLinkList &space);

// 构造一个空的线性表L
Status InitList_Sq(SqList &L);

/*
* 在顺序线性表L中删除第i个元素，并用e返回其值
* i的合法值为 1 <= i <= ListLength_Sq(L)
*/
Status ListDelete_Sq(SqList &L, int i, ElemType &e);

/*
* 在顺序线性表L中第i个位置之前插入一个新的元素e，
* i的合法值为 1 <= i <= ListLength_Sq(L) + 1
*/
Status ListInsert_Sq(SqList &L, int i, ElemType e);

/*
* 在顺序线性表L中查找第1个值与e满足compare()的元素的位序
* 若找到，则返回其在L中的位序，否则返回0
*/
int LocateElem_Sq(SqList L, ElemType e, Status(*compare)(ElemType, ElemType));

/*
* 已知顺序线性表La和Lb的元素按值非递减排列
* 归并La和Lb得到新的顺序线性表Lc，Lc的元素也按值非递减排列
*/
void MergeList_Sq(SqList La, SqList Lb, SqList &Lc);