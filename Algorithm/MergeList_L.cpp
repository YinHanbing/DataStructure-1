#include "List.h"

/*
 * ��֪�������Ա�La��Lb��Ԫ�ذ�ֵ�ǵݼ�����
 * �鲢La��Lb�õ��µĵ������Ա�Lc��Lc��Ԫ��Ҳ��ֵ�ǵݼ�����
 */
void MergeList_L(LinkList &La, LinkList &Lb, LinkList &Lc)
{
	LinkList pa = La->next;
	LinkList pb = Lb->next;
	LinkList pc = Lc = La;	// ��La��ͷ�����ΪLc��ͷ���

	while (pa && pb)
	{
		if (pa->data <= pb->data)
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}

	pc->next = pa ? pa : pb;	// ����ʣ���
	free(Lb);	// �ͷ�Lb��ͷ���
}	// MergeList_L