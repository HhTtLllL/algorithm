//##################################################################
// File Name: 129.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年04月23日 星期四 21时36分24秒
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
        int sum = 0;
        vector<int> temp;
public:
    int sumNumbers(TreeNode* root) {

            if(root)
            {
                    temp.push_back(root->val);
                    sumNumbers(root->left);
                    sumNumbers(root->right);
            }
            else if (root->left || root->right)
            {
            int res = 0;
           for(int i = 0 ; i < temp.size() ; i ++ )
            {
                res = res*10 + temp[i];
            }

            cout << res << endl;

            sum += res;
            if(temp.size())
                temp.pop_back();
            }

            return sum;
    }
};

