#pragma once

#include "predefine.h"
#include "BiTree.h"

// SElemType表示一个栈空间元素
// typedef int SElemType;
typedef BiTree SElemType;

// 栈的顺序存储表示
#define STACK_INIT_SIZE 5	// 存储空间初始分配量
#define STACKINCREMENT 2	// 存储空间分配增量
typedef struct {
	SElemType *base;	// 在栈构造之前和销毁之后，base的值为NULL
	SElemType *top;		// 栈顶指针
	int stacksize;		// 当前已分配的存储空间，已元素为单位
}SqStack;

// 基本操作的函数原型的说明

//构造一个空栈S
Status InitStack(SqStack &S);

// 销毁栈S，S不存在
Status DestroyStack(SqStack &S);

// 把S置为空栈
Status ClearStack(SqStack &S);

// 若栈S为空栈，则返回TRUE，否则返回FALSE
Status StackEmpty(SqStack S);

// 若栈S已满，则返回TRUE，否则返回FALSE
Status StackFull(SqStack S);

// 返回S的元素个数，即栈的长度
int StackLength(SqStack S);

// 若栈不空，则用e返回S的栈顶元素，并返回OK，否则返回ERROR
Status GetTop(SqStack S, SElemType &e);

// 插入元素e为新的栈顶元素
Status Push(SqStack &S, SElemType e);

// 若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR
Status Pop(SqStack &S, SElemType &e);

// 从栈底到栈顶依次对栈中每个元素调用函数visit()。一旦visit()失败，则操作失败
Status StackTraverse(SqStack S, Status(*visit)());