#include "SqStack.h"

// ��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR
Status Pop(SqStack &S, SElemType &e)
{
	if (S.top==S.base)
	{
		return ERROR;
	}
	e = *--S.top;
	return OK;
}	// Pop