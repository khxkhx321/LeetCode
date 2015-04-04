//https://leetcode.com/submissions/detail/24739142/
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode * start = NULL;
        ListNode * current = NULL;
        
        if(l1 == NULL)
        {
            return l2;
        }
        if(l2 == NULL)
        {
            return l1;
        }

        if(l2->val < l1->val)
        {
            start = l2;
            current = start;
            l2 = l2->next;
        }
        else
        {
            start = l1;
            current = start;
            l1 = l1->next;
        }
        
        
        while(l1 != NULL && l2 != NULL )
        {
            if(l1->val < l2->val)
            {
                ListNode * temp = l1;
                l1 = l1->next;
                current->next = temp;
                current=current->next;
            }
            else
            {
                ListNode * temp = l2;
                l2 = l2->next;
                current->next = temp;
                current=current->next;
            }
        }
        
        if(l1 != NULL)
        {
            current->next = l1;
        }
        else
        {
             current->next = l2;
        }
        return start;
    }
};