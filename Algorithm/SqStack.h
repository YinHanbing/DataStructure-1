#pragma once

#include "predefine.h"
#include "BiTree.h"

// SElemType��ʾһ��ջ�ռ�Ԫ��
// typedef int SElemType;
typedef BiTree SElemType;

// ջ��˳��洢��ʾ
#define STACK_INIT_SIZE 5	// �洢�ռ��ʼ������
#define STACKINCREMENT 2	// �洢�ռ��������
typedef struct {
	SElemType *base;	// ��ջ����֮ǰ������֮��base��ֵΪNULL
	SElemType *top;		// ջ��ָ��
	int stacksize;		// ��ǰ�ѷ���Ĵ洢�ռ䣬��Ԫ��Ϊ��λ
}SqStack;

// ���������ĺ���ԭ�͵�˵��

//����һ����ջS
Status InitStack(SqStack &S);

// ����ջS��S������
Status DestroyStack(SqStack &S);

// ��S��Ϊ��ջ
Status ClearStack(SqStack &S);

// ��ջSΪ��ջ���򷵻�TRUE�����򷵻�FALSE
Status StackEmpty(SqStack S);

// ��ջS�������򷵻�TRUE�����򷵻�FALSE
Status StackFull(SqStack S);

// ����S��Ԫ�ظ�������ջ�ĳ���
int StackLength(SqStack S);

// ��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR
Status GetTop(SqStack S, SElemType &e);

// ����Ԫ��eΪ�µ�ջ��Ԫ��
Status Push(SqStack &S, SElemType e);

// ��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR
Status Pop(SqStack &S, SElemType &e);

// ��ջ�׵�ջ�����ζ�ջ��ÿ��Ԫ�ص��ú���visit()��һ��visit()ʧ�ܣ������ʧ��
Status StackTraverse(SqStack S, Status(*visit)());