///////////////////////////////////////////////////////////////
// File Name: 36.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-13 22:41:17
// Description:
///////////////////////////////////////////////////////////////

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/
class Solution {

private:
    Node *pre, *head;
    
    void dfs(Node* cur) {

        if(cur == nullptr) return ;

        dfs(cur->left);
        if(nullptr != pre) pre->right = cur;
        else head = cur;

        cur->left = pre;
        pre = cur;
        dfs(cur->right);
    }

public:
    Node* treeToDoublyList(Node* root) {

        if(root == nullptr) return nullptr;
        dfs(root);
        

        head->left = pre;
        pre->right = head;

        return head;
    }
};



