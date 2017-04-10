#include "SqStack.h"

// ≤Â»Î‘™ÀÿeŒ™–¬µƒ’ª∂•‘™Àÿ
Status Push(SqStack &S, SElemType e)
{
	// ’ª¬˙£¨◊∑º”¥Ê¥¢ø’º‰
	if (S.top - S.base >= S.stacksize)
	{
		S.base = (SElemType *)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(SElemType));
		if (!S.base)
		{
			exit(OVERFLOW);	// ¥Ê¥¢∑÷≈‰ ß∞‹
		}
		S.top = S.base + S.stacksize;
		S.stacksize += STACKINCREMENT;
	}
	*S.top++ = e;
	return OK;
}	// Push