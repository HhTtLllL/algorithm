//##################################################################
// File Name: 144.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月07日 星期六 22时33分01秒
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
class Solution {
	public:
		vector<int> preorderTraversal(TreeNode* root) 
		{
			vector<int> record;
			if( !root ) return NULL;
			
			record.push_back( root->val );
			preorderTraversal( root->left );
			preorderTraversal( root->right );

			return record;

		}
};
