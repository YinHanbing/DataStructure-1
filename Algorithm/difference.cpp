#include "SLList.h"

/*
 * �������뼯��A��B��Ԫ�أ���һά����space�н�����ʾ����(A-B)U(B-A)
 * �ľ�̬����SΪ��ͷָ�롣���豸�ÿռ��㹻��space[0].curΪ��ͷָ�롣
 */
void difference(SLinkList &space, int &S)
{
	InitSpace_SL(space);				// ��ʼ�����ÿռ�
	S = Malloc_SL(space);				// ����S��ͷ���
	int r = S;							// rָ��S�ĵ�ǰ�����
	int m, n;
	scanf("%d,%d", &m, &n);				// ����A��B��Ԫ�ظ���
	for (int j = 1; j < m; ++j)			// ��������A������
	{
		int i = Malloc_SL(space);		// ������
		scanf("%d", &space[i].data);	// ����A��Ԫ��ֵ
		space[r].cur = i; r = i;		// ���뵽��β
	}	// for
	space[r].cur = 0;					// β����ָ��Ϊ��
	for (int j = 1; j < n; ++j)			// ��������B��Ԫ�أ������ڵ�ǰ�б��У�����룬����ɾ��
	{
		int b;
		scanf("%d", &b); int p = S; int k = space[S].cur;	// kָ�򼯺�A�еĵ�һ�����
		while (k != space[r].cur&&space[k].data != b)	// �ڵ�ǰ���в���
		{
			p = k; k = space[k].cur;
		}	// while
		if (k == space[r].cur)			// ��ǰ���в����ڸ�Ԫ�أ�������r��ָ���֮����r��λ�ò���
		{
			int i = Malloc_SL(space);
			space[i].data = b;
			space[i].cur = space[r].cur;
			space[r].cur = i;
		}	// if
		else
		{
			space[p].cur = space[k].cur;
			Free_SL(space, k);
			if (r == k)
			{
				r = p;
			}
		}	// else
	}	// for
}	// difference