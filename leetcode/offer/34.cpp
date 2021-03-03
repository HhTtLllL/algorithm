///////////////////////////////////////////////////////////////
// File Name: 34.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-03 22:38:43
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

    vector<vector<int>> res;
    vector<int> vec;

    void find_sum(TreeNode* root, int sum, vector<int>& vec) {

        if(root->left == nullptr && root->right == nullptr) {
            //如果走到叶子节点
            if(sum == root->val) {
                //刚好走完
                vec.push_back(root->val);
                res.push_back(vec);
                vec.pop_back();
            }

            return ;
        }

        //如果当前节点不是叶子节点，继续往后走
        vec.push_back(root->val);

        //如果不是叶子节点, 
        if(root->left) find_sum(root->left, sum - root->val, vec);
        if(root->right) find_sum(root->right, sum - root->val, vec);
       
        //退出当前节点
        vec.pop_back(); 

        return ;
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        if(root == nullptr) return res;
        find_sum(root, sum, vec);


        return res;
    }
};
