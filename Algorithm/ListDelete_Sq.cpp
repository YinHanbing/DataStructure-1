#include "List.h"

/*
 * 在顺序线性表L中删除第i个元素，并用e返回其值
 * i的合法值为 1 <= i <= ListLength_Sq(L)
 */
Status ListDelete_Sq(SqList &L, int i, ElemType &e)
{
	if ((i < 1) || (i > L.length))
	{
		return ERROR;	// i值不合法
	}

	ElemType *p = &(L.elem[i - 1]); // p为被删除元素的位置
	e = *p;	// 被删除元素的值赋给e
	ElemType *q = L.elem + L.length - 1;	// 表尾元素的位置
	
	for (++p; p <= q; ++p)
	{
		*(p - 1) = *p;	// 被删除元素之后的元素左移
	}

	--L.length;	// 表长减1
	return OK;
}	// ListDelete_Sq