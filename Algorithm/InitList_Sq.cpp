#include "List.h"

// ����һ���յ����Ա�L
Status InitList_Sq(SqList &L)
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));

	if (!L.elem)
	{
		exit(OVERFLOW);				// �洢����ʧ��
	}

	L.length = 0;					// �ձ���Ϊ0
	L.listsize = LIST_INIT_SIZE;	// ��ʼ�洢����
	return OK;
}	// InitList_Sq