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
    ListNode* middleNode(ListNode* head) 
    {
	    auto head1 = head;
	    int num = 0;
	    ListNode ans;
	    while(head1 != NULL)
	    {
		    num++;
		    head1 = head1->next;
	    }
	    int ans1 = 0;
	    if(num%2 == 1)   ans1 = (num+1)/2;
	    else	ans1 = (num + 1)/2 + 1;
	    num = 0;
	    while(head != NULL)
	    {
		    num++;
		    if(num == ans1) 
		    {
			    ans = *head
		    }
		    else head = head->next;

	    }

	    return ans;
    }
};
