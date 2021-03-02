///////////////////////////////////////////////////////////////
// File Name: 32-III.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-02 22:24:54
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

    int count = 0;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> res;

        if (root == nullptr) return res;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            int n = q.size();

            vector<int> tmp;
            stack<int> s;
            for(int i = 0; i < n; i ++) {

                TreeNode* front = q.front();
                q.pop();
                if(count%2 == 0) {

                    //顺序
                    tmp.push_back(front->val);
                    if(front->left != nullptr) q.push(front->left);
                    if(front->right != nullptr) q.push(front->right);
                }else {

                    //逆序
                    s.push(front->val);
                    if(front->left != nullptr) q.push(front->left);
                    if(front->right != nullptr) q.push(front->right);
                }
            }

            if(count%2 == 1) {

                int n = s.size();
                while(n -- ) {
                    
                    tmp.push_back(s.top());
                    s.pop();
                }
            }

            res.push_back(tmp);
            count++;
        }


        return res;
    }
};
