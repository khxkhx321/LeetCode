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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        int num = 0;
        ListNode * cur = head;
        while(cur!= NULL)
        {
            num++;
            cur = cur->next;
        }
        
        int index = num - n;
        
        cur = head;
        ListNode *pre = NULL;
        while(index != 0)
        {
            pre = cur;
            cur = cur->next;
            index--;
        }
        
        if(pre == NULL)
        {
            cur = head;
            head=head->next;
            delete cur;
            return head;
        }
        else
        {
            pre->next = cur->next;
            delete cur;
            return head;
        }
    }
};