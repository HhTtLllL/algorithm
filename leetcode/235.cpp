//##################################################################
// File Name: 235.cpp
// File Effect:   二叉搜索数的最近公共祖先
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年12月03日 星期二 20时59分39秒
//=============================================================
//!/usr/bin/python
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution 
{
	public:
		vector<int> v;
		TreeNode * temp;
		TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
		{
			serch(root);
			int i = 0;
			while(v[i] != p->val && v[i] != q->val)
			{
				i++;
			}

			temp->val = v[i-1];

			return temp;
		}
		
		void serch(struct TreeNode * root)
		{
			if(root == NULL) return ;
			v.push_back(root->val);
			serch(root->left);
			serch(root->right);
		}
};
