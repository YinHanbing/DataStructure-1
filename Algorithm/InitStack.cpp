#include "SqStack.h"

//构造一个空栈S
Status InitStack(SqStack &S)
{
	S.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	if (!S.base)
	{
		exit(OVERFLOW);	// 存储分配失败
	}
	S.top = S.base;
	S.stacksize = STACK_INIT_SIZE;
	return OK;
}	// InitStack