#include "../../../Header/Stack/SqStack.h"

// ��ջS�������򷵻�TRUE�����򷵻�FALSE
Status StackFull(SqStack S)
{
	if (S.top-S.base>=S.stacksize)
	{
		return TRUE;
	}
	return FALSE;
}	// StackFull