#include "SqList.h"
#include "LinkList.h"
#include "SqStack.h"
#include "LinkQueue.h"
#include "SqQueue.h"
#include "BiTree.h"

/*
// ��֤SqList����㷨��������
Status main()
{
	SqList L;
	int i;
	ElemType e;

	InitList_Sq(L);

	// ��SqList����5��Ԫ��
	printf("����SqList������%d��Ԫ�أ�", L.listsize);		// ÿ��Ԫ�ؼ��ÿո����
	for (i = 0; i < L.listsize; i++)
	{
		scanf("%d", &L.elem[i]);
		++L.length;
	}

	// ��ӡSqList�е�Ԫ��
	printf("----------------------------\n");
	printf("SqList�е�Ԫ��Ϊ��\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", *(L.elem + i));
	}
	printf("\n");
	printf("----------------------------\n");

	// �ڵ�i��λ��ǰ����e����ӡ
	printf("�����뽫�ڵڼ���λ��ǰ����Ԫ�أ�");
	scanf("%d", &i);
	printf("������Ҫ�����Ԫ�أ�");
	scanf("%d", &e);
	if (!ListInsert_Sq(L, i, e))
	{
		printf("�޷��ڵ�%d��λ��ǰ����Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("����ɹ���\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", L.elem[i]);
	}
	printf("\n");
	printf("----------------------------\n");

	// ɾ����i��λ�õ�Ԫ�غ󣬴�ӡSqList�е�Ԫ�ز���e����ɾ����Ԫ��
	printf("������Ҫɾ��Ԫ�ص�λ�ã�");
	scanf("%d", &i);
	if (!ListDelete_Sq(L, i, e))
	{
		printf("�޷�ɾ����%d��λ�õ�Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("ɾ���ɹ���\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", *(L.elem + i));
	}
	printf("\n");
	printf("e = %d\n", e);

	return OK;
}
*/

/*
// ��֤LinkList����㷨��������
Status main()
{
	LinkList L, p;
	int i;
	ElemType e;

	printf("������Ҫ������ʽ���Ա�Ԫ�صĸ�����");
	scanf("%d", &i);
	printf("�뵹������%d��Ԫ�أ�", i);			// ÿ��Ԫ�ؼ��ÿո����

	// ������������
	CreateList_L(L, i);

	// ��ӡLinkList�е�Ԫ��
	printf("----------------------------\n");
	printf("LinkList�е�Ԫ��Ϊ��\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	printf("----------------------------\n");

	// �ڵ�i��λ��ǰ����e����ӡ
	printf("�����뽫�ڵڼ���λ��ǰ����Ԫ�أ�");
	scanf("%d", &i);
	printf("������Ҫ�����Ԫ�أ�");
	scanf("%d", &e);
	if (!ListInsert_L(L, i, e))
	{
		printf("�޷��ڵ�%d��λ��ǰ����Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("����ɹ���\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	printf("----------------------------\n");

	// ɾ����i��λ�õ�Ԫ�غ󣬴�ӡLinkList�е�Ԫ�ز���e����ɾ����Ԫ��
	printf("������Ҫɾ��Ԫ�ص�λ�ã�");
	scanf("%d", &i);
	if (!ListDelete_L(L, i, e))
	{
		printf("�޷�ɾ����%d��λ�õ�Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("ɾ���ɹ���\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");
	printf("e = %d\n", e);
	printf("----------------------------\n");

	// ��ȡLinkList�еĵ�i��Ԫ��
	printf("��������Ҫ��ȡ�ڼ���Ԫ�أ�");
	scanf("%d", &i);
	if (!GetElem_L(L, i, e))
	{
		printf("�޷���ȡ��%d��λ�õ�Ԫ��", i);
		printf("\n");
		exit(ERROR);
	}
	printf("��ȡ�ɹ���\n");
	printf("e = %d\n", e);

	return OK;
}
*/

/*
// ��֤SqStack����㷨��������
Status main()
{
	SqStack S;
	int i;
	SElemType e;

	InitStack(S);					// ��ʼ��һ����ջ

	while (true)
	{
		printf("��ѡ��һЩ��Ž��в�����\n");
		printf("1.ѹջ	2.��ջ	3.��ȡջ��Ԫ��	4.�˳�\n");
		printf("����������ѡ��");
		scanf("%d", &i);			// ��ȡ�û�ѡ��Ĳ�������
		switch (i)
		{
		case 1:
			if (!StackFull(S))
			{
				printf("----------------------------\n");
				printf("ѹջ��\n");
				// ��SqStack����1��Ԫ��
				printf("����SqStack������1��Ԫ�أ�");		// ÿ��Ԫ�ؼ��ÿո����
				scanf("%d", &e);
				Push(S, e);

				// ��ӡSqList�е�Ԫ��
				printf("----------------------------\n");
				printf("SqStack�е�Ԫ��Ϊ��\n");
				for (i = 0; i < S.top - S.base; i++)
				{
					printf("%d ", *(S.base + i));
				}
				printf("\n");
				printf("----------------------------\n");
				break;
			}
			printf("----------------------------\n");
			printf("�޷�ѹջ��ջ����\n");
			printf("----------------------------\n");
			break;
		case 2:
			if (!StackEmpty(S))
			{
				printf("----------------------------\n");
				printf("��ջ��\n");
				Pop(S, e);

				// ��ӡSqList�е�Ԫ��
				printf("SqStack�е�Ԫ��Ϊ��\n");
				for (i = 0; i < S.top - S.base; i++)
				{
					printf("%d ", *(S.base + i));
				}
				printf("\n");
				printf("e = %d\n", e);
				printf("----------------------------\n");
				break;
			}
			printf("----------------------------\n");
			printf("�޷���ջ��ջ�գ�\n");
			printf("----------------------------\n");
			break;
		case 3:
			if (GetTop(S, e))
			{
				printf("----------------------------\n");
				printf("ջ��Ԫ��Ϊ��\n");
				printf("e = %d\n", e);
				printf("----------------------------\n");
			}
			break;
		case 4:
			exit(OK);
			break;
		default:
			exit(OK);
			break;
		}
	}
	return OK;
}
*/

// ��֤LinkQueue����㷨��������
Status main()
{
	LinkQueue Q;
	QueuePtr p;
	int i;
	QElemType e;

	InitQueue(Q);	// ����һ���ն���

	while (true)
	{
		printf("��ѡ��һЩ��Ž��в�����\n");
		printf("1.���	2.����	3.���ٶ���	4.�˳�\n");
		printf("����������ѡ��");
		scanf("%d", &i);			// ��ȡ�û�ѡ��Ĳ�������
		switch (i)
		{
		case 1:
			printf("----------------------------\n");
			printf("������һ��Ԫ�أ�");
			scanf("%d", &e);
			if (!EnQueue(Q, e)) {
				printf("�޷���ӣ�����������\n");
				printf("----------------------------\n");
				break;
			}

			// ��ӡ����Ԫ��
			printf("��ǰ����Ԫ��Ϊ��\n");
			for (p = Q.front->next; p; p = p->next)
			{
				printf("%d ", p->data);
			}
			printf("\n");
			printf("----------------------------\n");
			break;
		case 2:
			printf("----------------------------\n");
			if (!DeQueue(Q, e)) {
				printf("�޷����ӣ������ѿգ�\n");
				printf("----------------------------\n");
				break;
			}
			// ��ӡ����Ԫ��
			printf("��ǰ����Ԫ��Ϊ��\n");
			for (p = Q.front->next; p; p = p->next)
			{
				printf("%d ", p->data);
			}
			printf("\n");
			printf("e = %d\n", e);
			printf("----------------------------\n");
			break;
		case 3:
			printf("----------------------------\n");
			DestroyQueue(Q);
			printf("�������ٳɹ���\n");
			printf("----------------------------\n");
			exit(OK);
			break;
		case 4:
			exit(OK);
			break;
		default:
			exit(OK);
			break;
		}
	}
	return OK;
}

/*
// ��֤SqQueue����㷨��������
Status main()
{
	SqQueue Q;
	int i;
	QElemType e;

	InitQueue(Q);	// ����һ���ն���

	while (true)
	{
		printf("��ѡ��һЩ��Ž��в�����\n");
		printf("1.���	2.����	3.��ȡ���г���	4.�˳�\n");
		printf("����������ѡ��");
		scanf("%d", &i);			// ��ȡ�û�ѡ��Ĳ�������
		switch (i)
		{
		case 1:
			printf("----------------------------\n");
			printf("������һ��Ԫ�أ�");
			scanf("%d", &e);
			if (!EnQueue(Q, e)) {
				printf("�޷���ӣ�����������\n");
				printf("----------------------------\n");
				break;
			}

			// ��ӡ����Ԫ��
			printf("��ǰ����Ԫ��Ϊ��\n");
			for (i = Q.front; i != Q.rear; i = (i + 1) % MAXQSIZE)
			{
				printf("%d ", Q.base[i]);
			}
			printf("\n");
			printf("----------------------------\n");
			break;
		case 2:
			printf("----------------------------\n");
			if (!DeQueue(Q, e)) {
				printf("�޷����ӣ������ѿգ�\n");
				printf("----------------------------\n");
				break;
			}
			// ��ӡ����Ԫ��
			printf("��ǰ����Ԫ��Ϊ��\n");
			for (i = Q.front; i != Q.rear; i = (i + 1) % MAXQSIZE)
			{
				printf("%d ", Q.base[i]);
			}
			printf("\n");
			printf("e = %d\n", e);
			printf("----------------------------\n");
			break;
		case 3:
			printf("----------------------------\n");
			printf("���г���Ϊ��%d\n", QueueLength(Q));
			printf("----------------------------\n");
			break;
		case 4:
			exit(OK);
			break;
		default:
			exit(OK);
			break;
		}
	}
	return OK;
}
*/

/*
// ��֤BiTree����㷨��������
// ����:"ABC  DE G  F   "
Status main()
{
	BiTree T;
	printf("�봴��һ����������");
	CreateBiTree(T);	// ����һ��������
	printf("���������");
	PreOrderTraverse(T, PrintElement);
	printf("\n");
	printf("�������������һ����");
	InOrderTraverse(T, PrintElement, 1);
	printf("\n");
	printf("�������������������");
	InOrderTraverse(T, PrintElement, 2);
	printf("\n");
	return OK;
}
*/