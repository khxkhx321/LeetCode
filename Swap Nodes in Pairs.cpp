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
    ListNode* swapPairs(ListNode* head) {
        ListNode *p1 = NULL;
        ListNode *p2 = NULL;
        
        if(head == NULL || head->next ==NULL)
        {
            return head;
        }
        
        int swap = 1;
        ListNode * newhead = NULL;
        ListNode * cur = head;
        ListNode * pre = NULL;
        while(cur != NULL)
        {
            if(swap)
            {
                if(cur -> next != NULL)
                {
                    p1 = cur;
                    p2 = cur->next;
                    
                    if(newhead == NULL)
                    {
                        newhead = p2;
                    }
                    
                    p1 ->next = p2->next;
                    p2 ->next = p1;
                    
                    
                    cur = p2;
                    
                    if(pre != NULL)
                    {
                        pre ->next = cur;
                    }
                    
                }
                
            }
            pre = cur;
            cur = cur->next;
            swap = (swap + 1)%2;
        }
        return newhead;
    }
};