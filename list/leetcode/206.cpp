//##################################################################
// File Name: 206.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月06日 星期五 16时27分46秒
//=============================================================
//!/usr/bin/python

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
            ListNode* pre = NULL;
            ListNode* cur = head;
            ListNode* next;
            if(cur != NULL)
            {
                    next = cur->next;
            }
            else return NULL;


            while( cur != NULL)                 
            {
           //         ListNode* next = cur->next;
                    cur->next = pre;
                    pre = cur;
                    cur = next;
                    if( next != NULL)
                        next = next->next;
            }

            return pre;
    }
};

