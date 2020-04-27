//##################################################################
// File Name: 222.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年04月27日 星期一 21时01分21秒
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
	int count = 0;
public:
    int countNodes(TreeNode* root) {

	    if(root)
	    {
		    count++;
		    countNodes(root->right);
		    countNodes(root->left);
	    }

	    return count;
    }
};
