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
    bool hasCycle(ListNode *head) {
        if(head == NULL)
        {
            return false;
        }
        
        if(head->next == NULL)
        {
            return false;
        }
        if(head->next->next == NULL)
        {
            return false;
        }
        
        
        ListNode * p1 = head->next;
        ListNode * p2 = head->next->next;
        while(p1!= p2 && p1 != NULL && p2 != NULL)
        {
            if(p1->next == NULL)
            {
                return false;
            }
            if(p2 ->next == NULL || p2->next->next == NULL)
            {
                return false;
            }
            p1 = p1->next;
            p2 = p2->next->next;
        }
        if(p1 == NULL)
        {
            return false;
        }
        return true;
        
    }
};