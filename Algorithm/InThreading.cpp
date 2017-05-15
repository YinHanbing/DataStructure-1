#include "BiThrTree.h"

// ������
void InThreading(BiThrTree p)
{
	BiThrTree pre = p;
	if (p)
	{
		InThreading(p->lchild);		// ������������

		// ǰ������
		if (!p->lchild)
		{
			p->LTag = Thread;
			p->lchild = pre;
		}

		// �������
		if (!pre->rchild)
		{
			pre->RTag = Thread;
			pre->rchild = p;
		}
		pre = p;					// ����preָ��p��ǰ��
		InThreading(p->rchild);		// ������������
	}
}	// InThreading