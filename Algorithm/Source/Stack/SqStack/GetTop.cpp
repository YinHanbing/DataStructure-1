#include "../../../Header/Stack/SqStack.h"

// ��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR
Status GetTop(SqStack S, SElemType &e)
{
	if (S.top == S.base)
	{
		return ERROR;
	}
	e = *(S.top - 1);
	return OK;
}	// GetTop