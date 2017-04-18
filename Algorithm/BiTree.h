#pragma once

#include "predefine.h"

// TElemType表示一个二叉树元素
typedef int TElemType;

// 二叉树的二叉链表存储表示
typedef struct BiTNode {
	TElemType data;
	struct BiTNode *lchild, *rchild;	// 左右孩子指针
}BiTNode, *BiTree;

// 基本操作的函数原型说明

/*
 * 按先序次序输入二叉树中结点的值（一个字符），空格字符表示空树
 * 构造二叉链表表示的二叉树T。
 */
Status CreateBiTree(BiTree &T);

/*
 * 采用二叉链表存储结构，Visit是对结点操作的应用函数。
 * 先序遍历二叉树T，对每个结点调用函数Visit一次且仅一次
 * 一旦Visit失败，则操作失败。
 */
Status PreOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

/*
 * 采用二叉链表存储结构，Visit是对结点操作的应用函数。
 * 中序遍历二叉树T，对每个结点调用函数Visit一次且仅一次
 * 一旦Visit失败，则操作失败。
 */
Status InOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

/*
 * 采用二叉链表存储结构，Visit是对结点操作的应用函数。
 * 后序遍历二叉树T，对每个结点调用函数Visit一次且仅一次
 * 一旦Visit失败，则操作失败。
 */
Status PostOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

/*
 * 采用二叉链表存储结构，Visit是对结点操作的应用函数。
 * 层序遍历二叉树T，对每个结点调用函数Visit一次且仅一次
 * 一旦Visit失败，则操作失败。
 */
Status LevelOrderTraverse(BiTree T, Status(*Visit)(TElemType e));

/*
 * 简单的Visit函数
 */
Status PrintElement(TElemType e)
{
	printf("%d", e);
	return OK;
}