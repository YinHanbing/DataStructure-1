#include "../../../Header/Stack/SqStack.h"

//����һ����ջS
Status InitStack(SqStack &S)
{
	S.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	if (!S.base)
	{
		exit(OVERFLOW);	// �洢����ʧ��
	}
	S.top = S.base;
	S.stacksize = STACK_INIT_SIZE;
	return OK;
}	// InitStack