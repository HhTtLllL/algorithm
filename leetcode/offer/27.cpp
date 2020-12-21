///////////////////////////////////////////////////////////////
// File Name: 27.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-21 20:10:19
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
    TreeNode* mirrorTree(TreeNode* root) {

        if(!root) return NULL;

        stack<TreeNode*> s;

        s.push(root);

        while(s.size()) {

            TreeNode* tmp = s.top();
            s.pop();

            if (tmp->left != NULL)  s.push(tmp->left);
            if (tmp->right != NULL) s.push(tmp->right);

            TreeNode* swp = tmp->left;
            tmp->left = tmp->right;
            tmp->right = swp;
        }


        return root;
    }
};
