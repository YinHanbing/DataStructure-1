#include "SqList.h"

/*
 * 在顺序线性表L中第i个位置之前插入一个新的元素e，
 * i的合法值为 1 <= i <= ListLength_Sq(L) + 1
 */
Status ListInsert_Sq(SqList &L, int i, ElemType e)
{
	if (i<1 || i>L.length + 1)
	{
		return ERROR;	// i值不合法
	}

	if (L.length >= L.listsize)	//当前存储空间已满，增加分配
	{
		ElemType *newbase = (ElemType *)realloc(L.elem, (L.listsize + LISTINCREMENT) * sizeof(ElemType));

		if (!newbase)
		{
			exit(OVERFLOW);	// 存储分配失败
		}

		L.elem = newbase;	// 新基址
		L.listsize += LISTINCREMENT;	// 增加存储容量
	}

	ElemType *q = &(L.elem[i - 1]);	// q位插入位置

	for (ElemType *p = &(L.elem[L.length - 1]); p >= q; --p)
	{
		*(p + 1) = *p;	// 插入位置之后的元素右移
	}

	*q = e;	// 插入e
	++L.length;	// 表长增1
	return OK;
}	// ListInsert_Sq