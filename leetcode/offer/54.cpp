///////////////////////////////////////////////////////////////
// File Name: 54.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-07 22:46:26
// Description:
///////////////////////////////////////////////////////////////
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

private:

    vector<int> res;
    void traverse(TreeNode* root) {

        if(root == nullptr) return ;
        if(root->left != nullptr) traverse(root->left);
        res.push_back(root->val);
        if(root->right != nullptr) traverse(root->right);
    }


public:
    int kthLargest(TreeNode* root, int k) {

        traverse(root);

        int n = res.size();

        return res[n - k];
    }
};
