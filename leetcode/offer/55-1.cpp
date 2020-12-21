///////////////////////////////////////////////////////////////
// File Name: 55-1.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-21 20:15:40
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

    int findDepth(TreeNode* root, int depth) {

        if(root) depth++;
        else return depth;

        return max(findDepth(root->right, depth), findDepth(root->left, depth));
    }



    int maxDepth(TreeNode* root) {

        return findDepth(root, 0);
    }
};
