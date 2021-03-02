///////////////////////////////////////////////////////////////
// File Name: 52.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-03-01 22:41:03
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        //备份链表头结点
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(headA != headB) {

            if(headA != NULL) {

                headA = headA->next;
            }else headA = tempB;

            if(headB != NULL) {

                headB = headB->next;
            }else headB = tempA;
        }

        return headA;
    }
};
