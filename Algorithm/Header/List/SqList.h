#pragma once

#include "../predefine.h"

// ElemType��ʾһ��Ԫ��
typedef int ElemType;

// ���Ա�Ķ�̬����˳��洢�ṹ
#define LIST_INIT_SIZE 5		// ���Ա�洢�ռ�ĳ�ʼ������
#define LISTINCREMENT 2			// ���Ա�洢�ռ�ķ�������
typedef struct {
	ElemType *elem;		// �洢�ռ��ַ
	int length;			// ��ǰ����
	int listsize;		// ��ǰ����Ĵ洢��������sizeof(ElemType)Ϊ��λ��
}SqList;

// ���������ĺ���ԭ�͵�˵��

// ����һ���յ����Ա�L
Status InitList_Sq(SqList &L);

/*
 * ��˳�����Ա�L��ɾ����i��Ԫ�أ�����e������ֵ
 * i�ĺϷ�ֵΪ 1 <= i <= ListLength_Sq(L)
 */
Status ListDelete_Sq(SqList &L, int i, ElemType &e);

/*
 * ��˳�����Ա�L�е�i��λ��֮ǰ����һ���µ�Ԫ��e��
 * i�ĺϷ�ֵΪ 1 <= i <= ListLength_Sq(L) + 1
 */
Status ListInsert_Sq(SqList &L, int i, ElemType e);

/*
 * ��˳�����Ա�L�в��ҵ�1��ֵ��e����compare()��Ԫ�ص�λ��
 * ���ҵ����򷵻�����L�е�λ�򣬷��򷵻�0
 */
int LocateElem_Sq(SqList L, ElemType e, Status(*compare)(ElemType, ElemType));

/*
 * ��֪˳�����Ա�La��Lb��Ԫ�ذ�ֵ�ǵݼ�����
 * �鲢La��Lb�õ��µ�˳�����Ա�Lc��Lc��Ԫ��Ҳ��ֵ�ǵݼ�����
 */
void MergeList_Sq(SqList La, SqList Lb, SqList &Lc);