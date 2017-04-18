#pragma once

#include "predefine.h"

// QElemType��ʾһ�����пռ�Ԫ��
typedef int QElemType;

// �������С������е���ʽ�洢�ṹ
typedef struct QNode {
	QElemType data;
	struct QNode *next;
}QNode, *QueuePtr;

typedef struct {
	QueuePtr front;	// ��ͷָ��
	QueuePtr rear;	// ��βָ��
}LinkQueue;

// ���������ĺ���ԭ��˵��

// ����һ���ն���Q
Status InitQueue(LinkQueue &Q);

// ���ٶ���Q��Q���ٴ���
Status DestroyQueue(LinkQueue &Q);

// ��Q��Ϊ�ն���
Status ClearQueue(LinkQueue &Q);

// ������QΪ�ն��У��򷵻�TRUE�����򷵻�FALSE
Status QueueEmpty(LinkQueue Q);

// ����Q��Ԫ�ظ�������Ϊ���еĳ���
Status QueueLength(LinkQueue Q);

// �����в��գ�����e����Q�Ķ�ͷԪ�أ�������OK�����򷵻�ERROR
Status GetHead(LinkQueue Q, QElemType &e);

// ����Ԫ��eΪQ���µĶ�βԪ��
Status EnQueue(LinkQueue &Q, QElemType e);

/*
 * �����в��գ���ɾ��Q�Ķ�ͷԪ�أ���e������ֵ��������OK��
 * ���򷵻�ERROR
 */
Status DeQueue(LinkQueue &Q, QElemType &e);

// �Ӷ�ͷ����β���ζԶ���Q��ÿ��Ԫ�ص��ú���visit()��һ��visitʧ�ܣ������ʧ�ܡ�
Status QueueTraverse(LinkQueue Q, Status *visit());