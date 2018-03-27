#include "../../../Header/Stack/SqStack.h"

// 若栈S已满，则返回TRUE，否则返回FALSE
Status StackFull(SqStack S)
{
	if (S.top-S.base>=S.stacksize)
	{
		return TRUE;
	}
	return FALSE;
}	// StackFull