#include "../../../Header/Stack/SqStack.h"

// ��ջSΪ��ջ���򷵻�TRUE�����򷵻�FALSE
Status StackEmpty(SqStack S)
{
	if (S.base == S.top)
	{
		return TRUE;
	}
	return FALSE;
}	// StackEmpty