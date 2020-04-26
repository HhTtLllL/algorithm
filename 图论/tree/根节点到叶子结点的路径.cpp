//##################################################################
// File Name: 根节点到叶子结点的路径.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月25日 星期一 21时17分29秒
//=============================================================
//!/usr/bin/python


#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

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
/*
int visit(BiTNode *T)  
{
	printf("%c",(*T)->data);
	return 0;
}
*/
// 前序遍历
int PreOrderTraverse(BiTree T,vector<char> path)
{
	if(T)
	{
		//visit(T);
		path.push_back(T->data);

		if(T->lchild == NULL && T->rchild == NULL)
		{
			printf("%c:",path[path.size() - 1]);
			for(int i = 0;i < path.size() - 1;i++) printf("%c",path[i]);
			printf("\n");
		}
		PreOrderTraverse(T->lchild,path);
		PreOrderTraverse(T->rchild,path);
	}


	return 0;
}

int zhongTraverse(BiTree T)
{
	if(T)
	{
		zhongTraverse(T->lchild);
		//visit(T);
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
		//visit(T);
	}

	return 0;
}

int main()
{

	int level = 1;
	vector<char> path;
	BiTNode *T = NULL;
	// 创建 二叉树
	CreateBiTree(&T,level); //要对 T 的内容进行更改,所以要传入 T的地址
	// 遍历 二叉树
	
	PreOrderTraverse(T,path);
	
	return 0;
}
