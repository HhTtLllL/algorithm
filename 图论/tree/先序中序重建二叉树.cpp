//##################################################################
// File Name: 先序中序重建二叉树.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月25日 星期一 19时53分44秒
//=============================================================
//!/usr/bin/python

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string.h>

using namespace std;

struct TreeNode
{
	char val;
	TreeNode * left;
	TreeNode * right;
};
TreeNode * BinaryTree(vector<char> pre,vector<char> in);

int visit(char c)  
{
	printf("%c",c);
	return 0;
}
int houTraverserse(TreeNode* T)
{
	if(T)
	{
		houTraverserse(T->left);
		houTraverserse(T->right);
		visit(T->val);
	}

	return 0;
}

int main()
{
	vector<char> pre;//先序
	vector<char> in; //中序
	
	char temp;
	char s[1000];

	scanf("%s",s);
	int len = strlen(s);

	for(int i = 0;i < len;i++)
	{
		pre.push_back(s[i]);
	}
	scanf("%s",s);
	len = strlen(s);
	for(int i = 0;i < len;i++)
	{
		in.push_back(s[i]);
	}

	

	TreeNode * root = BinaryTree(pre,in);
	houTraverserse(root);
	

	printf("\n");
	
	
	return 0;
}

TreeNode * BinaryTree(vector<char> pre,vector<char> in)
{
	if(pre.size() == 0) return NULL;

	TreeNode* root = new TreeNode();
	root->val = pre[0];
	root->left = NULL;
	root->right = NULL;

	vector<char> left_pre,right_pre,left_in,right_in;
	int gen;

	//找到根结点在中序遍历中的下表
	for(int i = 0;i <in.size();i++)
	{
		if(in[i] == pre[0])
		{
			gen = i;
			break;
		}
	}

	//中序遍历根节点左边的排序是左子树的中序遍历
	for(int i = 0;i < gen;i++)
	{
		left_pre.push_back(pre[i+1]);
		left_in.push_back(in[i]);
	}

	for(int i = gen + 1;i <in.size();i++)
	{
		right_pre.push_back(pre[i]);
		right_in.push_back(in[i]);
	}

	root->left = BinaryTree(left_pre,left_in);
	root->right = BinaryTree(right_pre,right_in);

	return root;
}
