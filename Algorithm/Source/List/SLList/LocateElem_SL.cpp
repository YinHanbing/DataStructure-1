#include "../../../Header/List/SLList.h"

/*
 * 在静态单链线性表L中查找第1个值为e的元素
 * 若找到，则返回它在L中的位序，否则返回0
 */
int LocateElem_SL(SLinkList S, ElemType e)
{
	int i = S[0].cur;	// i指示表中第一个结点

	// 在表中顺链查找
	while (i&&S[i].data!=e)
	{
		i = S[i].cur;
	}
	return i;
}	// LocateElem_SL