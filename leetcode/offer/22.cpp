///////////////////////////////////////////////////////////////
// File Name: 22.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-07 22:02:42
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
    ListNode* getKthFromEnd(ListNode* head, int k) {

        ListNode* tmp = head;
        int sum = 0;

        while(tmp) {
            sum++;
            tmp = tmp->next;
        }


        k = sum - k;
        while(k) {

            k--;
            head = head->next;
        }

        return head;
    }
};
