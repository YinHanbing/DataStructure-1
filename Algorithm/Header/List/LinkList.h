#pragma once

#include "../predefine.h"

// ElemType��ʾһ��Ԫ��
typedef int ElemType;

// ���Ա�ĵ�����洢�ṹ
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

// ���������ĺ���ԭ�͵�˵��

// ��λ������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L
void CreateList_L(LinkList &L, int n);

/*
 * LΪ��ͷ���ĵ������ͷָ��
 * ����i��Ԫ�ش���ʱ����ֵ����e������OK�����򷵻�ERROR
 */
Status GetElem_L(LinkList L, int i, ElemType &e);

// �ڴ�ͷ���ĵ������Ա�L�У�ɾ����i��Ԫ�أ�����e������ֵ
Status ListDelete_L(LinkList &L, int i, ElemType &e);

// �ڴ�ͷ���ĵ������Ա�L�е�i��λ��֮ǰ����Ԫ��e
Status ListInsert_L(LinkList &L, int i, ElemType e);

/*
 * ��֪�������Ա�La��Lb��Ԫ�ذ�ֵ�ǵݼ�����
 * �鲢La��Lb�õ��µĵ������Ա�Lc��Lc��Ԫ��Ҳ��ֵ�ǵݼ�����
 */
void MergeList_L(LinkList &La, LinkList &Lb, LinkList &Lc);