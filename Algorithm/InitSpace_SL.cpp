#include "SLList.h"

/*
 * ��һά����space�и���������һ����������space[0].curλͷָ�룬
 * '0'��ʾ��ָ��
 */
void InitSpace_SL(SLinkList &space)
{
	for (int i = 0; i < MAXSIZE - 1; ++i)
	{
		space[i].cur = i + 1;
	}
	space[MAXSIZE - 1].cur = 0;
}	// InitSpace_SL