///////////////////////////////////////////////////////////////g
// File Name: 94.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-15 22:54:35
// Description:
///////////////////////////////////////////////////////////////

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

     void traversal(TreeNode* root, vector<int>& res) {

        if(!root)  return ;
        traversal(root->left, res);
        res.push_back(root->val);
        traversal(root->right, res);
    }

    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> res;
        traversal(root, res);

        return res;
    }
};
