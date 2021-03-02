///////////////////////////////////////////////////////////////
// File Name: 32-II.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-02 22:08:51
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
    vector<vector<int>> levelOrder(TreeNode* root) {
      
        vector<vector<int>> res;

        if(root == nullptr) return res;
        
        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()) {
            
            int n = q.size();

            vector<int> temp;
            for(int i = 0 ; i < n; i ++) {
                
                TreeNode* tmp = q.front();
                q.pop();

                temp.push_back(tmp->val);
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }

            res.push_back(temp);
        }

        return res;
    }
};
