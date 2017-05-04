#pragma once

#include "predefine.h"

// TElemType��ʾһ��������Ԫ��
typedef char TElemType;

// �������Ķ��������洢��ʾ
typedef enum { Link, Thread }PointerTag;		// Link == 0:ָ�룬Thread == 1:����
typedef struct BiThrNode {
	TElemType data;
	struct BiThrNode *lchild, *rchild;		// ���Һ���ָ��
	PointerTag LTag, RTag;					// ���ұ�־
}BiThrNode, *BiThrTree;

// ���������ĺ���ԭ��˵��

/*
 * Tָ��ͷ��㣬ͷ��������lchildָ����ڵ㣬�ɲμ��������㷨��
 * �����������������T�ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit��
 */
Status InOrderTraverse_Thr(BiThrTree T, Status(*Visit)(TElemType e));

// �������������T��������������������Thrtָ��ͷ��㡣
Status InOrderThreading(BiThrTree &Thrt, BiThrTree T);

// ������
void InThreading(BiThrTree p);