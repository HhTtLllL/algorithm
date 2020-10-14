///////////////////////////////////////////////////////////////
// File Name: 24.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-14 21:42:09
// Description:
///////////////////////////////////////////////////////////////
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

        ListNode* re = NULL;

        while(head){

            ListNode* tmp = new ListNode();
            tmp->next = re;
            tmp->val = head->val;

            re = tmp;
            head = head->next;
        }

        return re;

    }
};
