///////////////////////////////////////////////////////////////
// File Name: 26.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-03 23:07:15
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

    bool recur(TreeNode* A, TreeNode* B) {

        //如果B为null, 表示已经匹配完了     返回true
        if(B == nullptr) return true;
        //如果A为null 或者 A的值不等于B的值 返回 false
        if(A == nullptr || A->val != B->val) return false;

        //如果两个都不为null, 继续往下判断
        return recur(A->left, B->left) && recur(A->right, B->right);
    }


public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {

        return (A != nullptr && B != nullptr) && (recur(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B));
    }
};
