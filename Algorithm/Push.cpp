#include "SqStack.h"

// ����Ԫ��eΪ�µ�ջ��Ԫ��
Status Push(SqStack &S, SElemType e)
{
	// ջ����׷�Ӵ洢�ռ�
	if (S.top - S.base >= S.stacksize)
	{
		S.base = (SElemType *)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(SElemType));
		if (!S.base)
		{
			exit(OVERFLOW);	// �洢����ʧ��
		}
		S.top = S.base + S.stacksize;
		S.stacksize += STACKINCREMENT;
	}
	*S.top++ = e;
	return OK;
}	// Push