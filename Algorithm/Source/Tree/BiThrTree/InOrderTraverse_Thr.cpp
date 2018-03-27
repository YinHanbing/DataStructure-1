#include "../../../Header/Tree/BiThrTree.h"

/*
 * Tָ��ͷ��㣬ͷ��������lchildָ����ڵ㣬�ɲμ��������㷨��
 * �����������������T�ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit��
 */
Status InOrderTraverse_Thr(BiThrTree T, Status(*Visit)(TElemType e))
{
	BiThrTree p = T->lchild;			// pָ����ڵ�
	while (p != T)						// �������������ʱ��p == T
	{
		while (p->LTag == Link)
		{
			p = p->lchild;
		}
		if (!Visit(p->data))
		{
			return ERROR;				// ������������Ϊ�յĽ��
		}
		while (p->RTag == Thread)
		{
			// ���ʺ�̽��
			p = p->rchild;
			Visit(p->data);
		}
		p = p->rchild;
	}
	return OK;
}	// InOrderTraverse_Thr