//##################################################################
// File Name: 203.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月06日 星期五 17时42分31秒
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
    ListNode* removeElements(ListNode* head, int val) {

            ListNode* dummyHead = new ListNode(0);
            dummyHead->next = head;

            ListNode* cur = dummyHead;

            while(cur->next != NULL)
            {
                    if( cur->next->val == val )
                    {
                            ListNode* del = cur->next;
                            cur->next = del->next;
                    }
                    else cur = cur->next;
            }

            return dummyHead->next;
    }
};


