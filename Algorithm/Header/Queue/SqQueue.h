#pragma once

#include "../predefine.h"

// QElemType��ʾһ�����пռ�Ԫ��
typedef int QElemType;

// ѭ�����С������е�ѭ��洢�ṹ
#define MAXQSIZE 6	// �����г���
typedef struct {
	QElemType *base;	// ��ʼ���Ķ�̬����洢�ռ�
	int front;			// ͷָ�룬�����в��գ�ָ�����ͷԪ��
	int rear;			// βָ�룬�����в��գ�ָ�����ΪԪ�ص���һ��λ��
}SqQueue;

// ���������ĺ���ԭ��˵��

// ����һ���ն���Q
Status InitQueue(SqQueue &Q);

// ����Q��Ԫ�ظ����������еĳ���
int QueueLength(SqQueue Q);

// ����Ԫ��eΪQ���µĶ�βԪ��
Status EnQueue(SqQueue &Q, QElemType e);

/*
 * �����в��գ���ɾ��Q�Ķ�ͷԪ�أ���e������ֵ��������OK��
 * ���򷵻�ERROR
 */
Status DeQueue(SqQueue &Q, QElemType &e);