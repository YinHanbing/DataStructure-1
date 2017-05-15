#pragma once

#include "predefine.h"

// ElemType��ʾһ��Ԫ��
typedef int ElemType;

// ���Ա�ľ�̬������洢�ṹ
#define MAXSIZE 100	// �������󳤶�
typedef struct {
	ElemType data;
	int cur;
}component, SLinkList[MAXSIZE];

// ���������ĺ���ԭ�͵�˵��

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

/*
 * �������뼯��A��B��Ԫ�أ���һά����space�н�����ʾ����(A-B)U(B-A)
 * �ľ�̬����SΪ��ͷָ�롣���豸�ÿռ��㹻��space[0].curΪ��ͷָ�롣
 */
void difference(SLinkList &space, int &S);