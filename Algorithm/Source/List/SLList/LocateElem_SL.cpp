#include "../../../Header/List/SLList.h"

/*
 * �ھ�̬�������Ա�L�в��ҵ�1��ֵΪe��Ԫ��
 * ���ҵ����򷵻�����L�е�λ�򣬷��򷵻�0
 */
int LocateElem_SL(SLinkList S, ElemType e)
{
	int i = S[0].cur;	// iָʾ���е�һ�����

	// �ڱ���˳������
	while (i&&S[i].data!=e)
	{
		i = S[i].cur;
	}
	return i;
}	// LocateElem_SL