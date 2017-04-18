#pragma once

#include "predefine.h"

// QElemType表示一个队列空间元素
typedef int QElemType;

// 单链队列——队列的链式存储结构
typedef struct QNode {
	QElemType data;
	struct QNode *next;
}QNode, *QueuePtr;

typedef struct {
	QueuePtr front;	// 队头指针
	QueuePtr rear;	// 队尾指针
}LinkQueue;

// 基本操作的函数原型说明

// 构造一个空队列Q
Status InitQueue(LinkQueue &Q);

// 销毁队列Q，Q不再存在
Status DestroyQueue(LinkQueue &Q);

// 将Q清为空队列
Status ClearQueue(LinkQueue &Q);

// 若队列Q为空队列，则返回TRUE，否则返回FALSE
Status QueueEmpty(LinkQueue Q);

// 返回Q的元素个数，即为队列的长度
Status QueueLength(LinkQueue Q);

// 若队列不空，则用e返回Q的队头元素，并返回OK；否则返回ERROR
Status GetHead(LinkQueue Q, QElemType &e);

// 插入元素e为Q的新的队尾元素
Status EnQueue(LinkQueue &Q, QElemType e);

/*
 * 若队列不空，则删除Q的队头元素，用e返回其值，并返回OK；
 * 否则返回ERROR
 */
Status DeQueue(LinkQueue &Q, QElemType &e);

// 从队头到队尾依次对队列Q中每个元素调用函数visit()。一旦visit失败，则操作失败。
Status QueueTraverse(LinkQueue Q, Status *visit());