//##################################################################
// File Name: 某曾叶子结点个数.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月25日 星期一 20时48分39秒
//=============================================================
//!/usr/bin/python

#include <stdio.h>
#include<stdlib.h>

static int num = 0;
typedef char ElemType;

typedef struct BiTNode
{
	ElemType data;
	int level;
	struct BiTNode * lchild,*rchild;
}BiTNode,*BiTree;


int CreateBiTree(BiTree *T,int level)
{

	char c;
	scanf("%c",&c);
	if('#' == c)
	{
		*T = NULL;
	}
	else
	{
		(*T) = (BiTNode *)malloc(sizeof(BiTNode));
		(*T)->data = c;
		(*T)->level = level;

		CreateBiTree(&(*T)->lchild,level + 1);
		CreateBiTree(&(*T)->rchild,level + 1);
	}

	return 0;
}
int visit(BiTNode *T,int temp)
{
//	printf("%c",c);
	//printf("(%c,%d)",T->data,T->level);
	if(temp == T->level)
	{
		if(T->rchild == NULL && T->rchild == NULL) num++;
	}
	return 0;
}

// 前序遍历
int PreOrderTraverse(BiTree T,int temp)
{
	if(T)
	{
		visit(T,temp);
		PreOrderTraverse(T->lchild,temp);
		PreOrderTraverse(T->rchild,temp);
	}

	return 0;
}
/*
int zhongTraverse(BiTree T)
{
	if(T)
	{
		zhongTraverse(T->lchild);
		visit(T);
		zhongTraverse(T->rchild);
	}
	return 0;
}
int houTraverserse(BiTree T)
{
	if(T)
	{
		houTraverserse(T->lchild);
		houTraverserse(T->rchild);
		visit(T);
	}

	return 0;
}
*/
int main()
{

	int level = 1;

	BiTNode *T = NULL;
	// 创建 二叉树
	CreateBiTree(&T,level); //要对 T 的内容进行更改,所以要传入 T的地址
	// 遍历 二叉树
	
	int temp;
	scanf("%d",&temp);
	PreOrderTraverse(T,temp);
	printf("%d\n",num);

	return 0;
}
