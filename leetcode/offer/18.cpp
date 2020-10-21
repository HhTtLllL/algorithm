///////////////////////////////////////////////////////////////
// File Name: 18.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-10-21 19:42:53
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
    ListNode* deleteNode(ListNode* head, int val) {

        if(head->val == val) return head->next;
        ListNode* res = head;
        ListNode* tmp = head->next;
        while(tmp) {

            if(tmp->val == val) {
                head->next = tmp->next;

                return res;
            }
            tmp = tmp->next;
            head = head->next;
        }

        return res;
    }
};
