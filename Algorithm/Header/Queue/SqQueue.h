#pragma once

#include "../predefine.h"

// QElemType表示一个队列空间元素
typedef int QElemType;

// 循环队列——队列的循序存储结构
#define MAXQSIZE 6	// 最大队列长度
typedef struct {
	QElemType *base;	// 初始化的动态分配存储空间
	int front;			// 头指针，若队列不空，指向队列头元素
	int rear;			// 尾指针，若队列不空，指向队列为元素的下一个位置
}SqQueue;

// 基本操作的函数原型说明

// 构造一个空队列Q
Status InitQueue(SqQueue &Q);

// 返回Q的元素个数，即队列的长度
int QueueLength(SqQueue Q);

// 插入元素e为Q的新的队尾元素
Status EnQueue(SqQueue &Q, QElemType e);

/*
 * 若队列不空，则删除Q的队头元素，用e返回其值，并返回OK；
 * 否则返回ERROR
 */
Status DeQueue(SqQueue &Q, QElemType &e);