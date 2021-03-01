///////////////////////////////////////////////////////////////
// File Name: 28.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-01 21:57:38
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
public:

    bool recur(TreeNode* L, TreeNode* R) {

        if(L == NULL && R == NULL) return true;
        else if(L == NULL || R == NULL || L->val != R->val) return false;
        else {

            return recur(L->right, R->left) && recur(L->left, R->right);
        }
    }



    bool isSymmetric(TreeNode* root) {

        return root == NULL ? true : recur(root->left, root->right);
    }
};


