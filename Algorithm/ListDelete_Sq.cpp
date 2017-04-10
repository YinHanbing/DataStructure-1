#include "List.h"

/*
 * ��˳�����Ա�L��ɾ����i��Ԫ�أ�����e������ֵ
 * i�ĺϷ�ֵΪ 1 <= i <= ListLength_Sq(L)
 */
Status ListDelete_Sq(SqList &L, int i, ElemType &e)
{
	if ((i < 1) || (i > L.length))
	{
		return ERROR;	// iֵ���Ϸ�
	}

	ElemType *p = &(L.elem[i - 1]); // pΪ��ɾ��Ԫ�ص�λ��
	e = *p;	// ��ɾ��Ԫ�ص�ֵ����e
	ElemType *q = L.elem + L.length - 1;	// ��βԪ�ص�λ��
	
	for (++p; p <= q; ++p)
	{
		*(p - 1) = *p;	// ��ɾ��Ԫ��֮���Ԫ������
	}

	--L.length;	// ����1
	return OK;
}	// ListDelete_Sq