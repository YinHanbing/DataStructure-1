#include "SLList.h"

// 将下标为k的空闲结点回收到备用链表
void Free_SL(SLinkList &space, int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
}	// Free_SL