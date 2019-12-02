//##################################################################
// File Name: 21.cpp
// File Effect: 合并两个有序链表
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2019年11月21日 星期四 21时45分07秒
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
		ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
		{
			ListNode *temp1 = l1;
			int num = 1;
			ListNode * temp = NULL;
			ListNode * pre = NULL;
			while(l1)
			{
				while(l2 && l2->val <= l1->val)
				{
					if(pre == NULL)
					{
						temp = l2;
						l2 = l2->next;
						temp->next = l1;
						l1 = temp;
						temp1 = temp;
					}
					else
					{
						temp = l2;
						l2 = l2->next;
						pre->next = temp;
						temp->next = l1;
						pre = temp;
					}
				}
				pre = l1;
				l1 = l1->next;
			}

			while(l2)
			{
				if(pre != NULL)
				{
					temp = l2;
					l2 = l2->next;
					pre->next = temp;

					pre = temp;
				}
				else     return l2;

			}
			return temp1;

		}
};
