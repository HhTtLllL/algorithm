///////////////////////////////////////////////////////////////
// File Name: 7.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-10 20:20:25
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
    unordered_map<int, int> index;

    TreeNode* myBuildTree(const vector<int>& preorder, const vector<int>& inorder, int preorder_left, int preorder_right,  int inorder_left, int inorder_right){

        if(preorder_left > preorder_right){

            return nullptr;
        }

        //前序遍历中的第一个节点就是根节点
        int preorder_root = preorder_left;

        //在中序遍历中定位根节点
        int inorder_root = index[preorder[preorder_root]];

        //先把根节点建立起来
        TreeNode* root = new TreeNode(preorder[preorder_root]);

        //得到左子树中的节点数目
        int size_left_sub = inorder_root - inorder_left;
        
        //递归的构造左子树，并连到根节点     
        //先序遍历中 从左边界 + 1 开始的size_left_sub个元素就对应了中序遍历中从左边界开始到根节点定位 - 1的元素
        root->left = myBuildTree(preorder, inorder, preorder_left + 1, preorder_left + size_left_sub, inorder_left, inorder_root - 1);

        //递归地构造右子树，并连接到根节点
        
        root->right = myBuildTree(preorder, inorder, preorder_left + size_left_sub + 1, preorder_right, inorder_root + 1, inorder_right);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n = preorder.size();

        //构造哈希映射表， 帮助我们快速定位根节点
        for(int i = 0; i < n; i ++) {

            index[inorder[i]] = i;
        }

        return myBuildTree(preorder, inorder, 0, n - 1, 0, n - 1);
    }
};
