//##################################################################
// File Name: 非递归后续遍历.c
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月25日 星期一 19时15分58秒
//=============================================================
//!/usr/bin/python
/*二叉树的遍历* 2011.8.25*/ 

#include <stdio.h>
#include<stdlib.h>
#include <stack>

using namespace std;


typedef char ElemType;

typedef struct BiTNode
{
	ElemType data;
	struct BiTNode * lchild,*rchild;
}BiTNode,*BiTree;
 

int CreateBiTree(BiTree *T)  
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
		CreateBiTree(&(*T)->lchild); 
		CreateBiTree(&(*T)->rchild);
	}

	return 0;
}
int visit(char c)  
{
	printf("%c",c);
	return 0;
}

// 前序遍历
int PreOrderTraverse(BiTree T)
{
	if(T)
	{
		visit(T->data);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}

	return 0;
}

int zhongTraverse(BiTree T)
{
	if(T)
	{
		zhongTraverse(T->lchild);
		visit(T->data);
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
		visit(T->data);
	}

	return 0;
}

//后序非递归遍历
void postOrder(BiTree root)
{
	stack<BiTNode*> s;
	BiTree cur;  
	BiTree pre = NULL;

	s.push(root);

	while(!s.empty())
	{
		cur = s.top();
		if((cur->lchild == NULL && cur->rchild == NULL) || (pre != NULL && (pre == cur->lchild || pre == cur->rchild)))
		{
			printf("%c",cur->data);
			s.pop();
			pre = cur;
		}
		else
		{
			if(cur->rchild != NULL) s.push(cur->rchild);
			if(cur->lchild != NULL) s.push(cur->lchild);
		}
	}
}

int main()
{

	int level = 1;

	BiTNode *T = NULL;
	// 创建 二叉树
	CreateBiTree(&T); //要对 T 的内容进行更改,所以要传入 T的地址
	// 遍历 二叉树
/*	PreOrderTraverse(T);
	puts(" ");
	zhongTraverse(T);
	puts(" ");
	houTraverserse(T);
	puts(" ");*/
	postOrder(T);
	printf("\n");
	return 0;
}
