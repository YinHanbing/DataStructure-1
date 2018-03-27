#include "../../../Header/Stack/SqStack.h"

// 若栈S为空栈，则返回TRUE，否则返回FALSE
Status StackEmpty(SqStack S)
{
	if (S.base == S.top)
	{
		return TRUE;
	}
	return FALSE;
}	// StackEmpty