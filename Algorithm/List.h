#pragma once

#include "predefine.h"

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

// ���Ա�ĵ�����洢�ṹ
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

// ���Ա�ľ�̬������洢�ṹ
#define MAXSIZE 100	// �������󳤶�
typedef struct {
	ElemType data;
	int cur;
}component, SLinkList[MAXSIZE];

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

// ���±�Ϊk�Ŀ��н����յ���������
void Free_SL(SLinkList &space, int k);

/*
* ��һά����space�и���������һ����������space[0].curλͷָ�룬
* '0'��ʾ��ָ��
*/
void InitSpace_SL(SLinkList &space);

/*
* �ھ�̬�������Ա�L�в��ҵ�1��ֵΪe��Ԫ��
* ���ҵ����򷵻�����L�е�λ�򣬷��򷵻�0
*/
int LocateElem_SL(SLinkList S, ElemType e);

// �����ÿռ�����ǿգ��򷵻ط���Ľ���±꣬���򷵻�0
int Malloc_SL(SLinkList &space);

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