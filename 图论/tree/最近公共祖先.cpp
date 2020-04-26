//##################################################################
// File Name: 最近公共祖先.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月25日 星期一 21时31分59秒
//=============================================================
//!/usr/bin/python


#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

vector<char> path1;
vector<char> path2;

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
int PreOrderTraverse(BiTree T,vector<char> path,char ch1,int time)
{
	if(T)
	{
		//visit(T);
		path.push_back(T->data);
		if(T->data == ch1)
		{
			if(time == 1)
			{
				for(int i = 0;i < path.size();i++)
				{
					path1.push_back(path[i]);
				}
			}
			else if(time == 2)
			{
				for(int i = 0;i < path.size();i++)
				{
					path2.push_back(path[i]);
				}
			}

			return 0;
		}
		PreOrderTraverse(T->lchild,path,ch1,time);
		PreOrderTraverse(T->rchild,path,ch1,time);
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
	char ch1,ch2;

	// 创建 二叉树
	CreateBiTree(&T,level); //要对 T 的内容进行更改,所以要传入 T的地址
	// 遍历 二叉树
	
	getchar();
	scanf("%c %c",&ch1,&ch2);
	int time = 1;
	PreOrderTraverse(T,path,ch1,time);
	
	time = 2;
	PreOrderTraverse(T,path,ch2,time);

	if(path1.size() > path2.size())
	{
		for(int i = 0;i < path1.size();i++)
		{
			if(path1[i] != path2[i])
			{
				printf("%c\n",path1[i-1]);
				break;
			}
		}

	}
	else
	{
		for(int i = 0;i < path2.size();i++)
		{
			if(path1[i] != path2[i])
			{
				printf("%c\n",path1[i-1]);
				break;
			}
		}
	}


	
	return 0;
}
