//##################################################################
// File Name: 144.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年04月22日 星期三 21时24分47秒
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
              vector<int> res;
public:
    vector<int> preorderTraversal(TreeNode* root) {



            if( root )
            {
                    res.push_back(root->val);
                    preorderTraversal(root->left);
                    preorderTraversal(root->right);
            }

            return res;

    }
};
