///////////////////////////////////////////////////////////////
// File Name: 32.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-21 20:15:32
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
    queue<TreeNode*> q;
public:
    vector<int> levelOrder(TreeNode* root) {

        vector<int> res;

        if(root) {
            q.push(root);
        }

        while(!q.empty()) {
            
            TreeNode* tmp = q.front();
            res.push_back(tmp->val);
            q.pop();


            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }

        return res;
    }
};
