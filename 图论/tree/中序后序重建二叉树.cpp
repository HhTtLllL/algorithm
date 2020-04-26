//##################################################################
// File Name: 中序后序重建二叉树.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月25日 星期一 20时27分15秒
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
int xianTraverserse(TreeNode* T)
{
	if(T)
	{
		visit(T->val);
		xianTraverserse(T->left);
		xianTraverserse(T->right);
	}

	return 0;
}

int main()
{
	vector<char> in;//中序
	vector<char> hou; //后序
	
	char temp;
	char s[1000];

	scanf("%s",s);
	int len = strlen(s);

	for(int i = 0;i < len;i++)
	{
		in.push_back(s[i]);
	}
	scanf("%s",s);
	len = strlen(s);
	for(int i = 0;i < len;i++)
	{
		hou.push_back(s[i]);
	}

	

	TreeNode * root = BinaryTree(hou,in);
	xianTraverserse(root);
	

	printf("\n");
	
	
	return 0;
}

TreeNode * BinaryTree(vector<char> hou,vector<char> in)
{
	if(hou.size() == 0) return NULL;

	TreeNode* root = new TreeNode();
	root->val = hou[hou.size() - 1]; //后序遍历的最后一个结点是根结点
	root->left = NULL;
	root->right = NULL;

	vector<char> left_hou,right_hou,left_in,right_in;
	int gen;

	for(int i = 0;i <in.size();i++)
	{
		if(in[i] == hou[hou.size() - 1])
		{
			gen = i;
			break;
		}
	}

	for(int i = 0;i < gen;i++)
	{
		left_hou.push_back(hou[i]);
		left_in.push_back(in[i]);
	}

	for(int i = gen + 1;i <in.size();i++)
	{
		right_hou.push_back(hou[i - 1]);
		right_in.push_back(in[i]);
	}

	root->left = BinaryTree(left_hou,left_in);
	root->right = BinaryTree(right_hou,right_in);

	return root;
}
