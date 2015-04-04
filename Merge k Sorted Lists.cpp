//https://leetcode.com/submissions/detail/24744021/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
bool cmp(ListNode * a,ListNode * b)
{
return a->val > b->val;
}
 
 
class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        if(lists.begin() == lists.end())
        {
            return NULL;
        }
        vector<ListNode *>::iterator tempit = lists.begin();
        while(true)
        {
            if((*tempit) == NULL)
            {
                lists.erase(tempit);
                tempit = lists.begin();
            }
            else
            {
                tempit++;
            }
            
            if(tempit == lists.end())
            {
                break;
            }
        }
        
        if(lists.begin() == lists.end())
        {
            return NULL;
        }
        
        ListNode * node = NULL;
        ListNode * current = NULL;
        
        make_heap(lists.begin(), lists.end(), cmp);
        vector<ListNode *>::iterator it = lists.begin();
        while(true)
        {
            if(lists.begin() == lists.end())
            {
                return node;
            }
            
            it = lists.begin();
            if(current == NULL)
            {
                node = *it;
                current = node;
                if((*it)->next == NULL)
                {
                    pop_heap(lists.begin(), lists.end(), cmp);
                    lists.pop_back();
                }
                else
                {
                    *it = (*it)->next;
                    pop_heap(lists.begin(), lists.end(), cmp);
                    push_heap(lists.begin(), lists.end(), cmp);
                }
            }
            else
            {
                if( (*it)->next != NULL)
                {
                    current->next = *it;
                    *it = (*it)->next;
                    current = current->next;
                    pop_heap(lists.begin(), lists.end(), cmp);
                    push_heap(lists.begin(), lists.end(), cmp);
                }
                else
                {
                    current->next = *it;
                    current = current->next;
                    pop_heap(lists.begin(), lists.end(), cmp);
                    lists.pop_back();
                    
                }
            }
        
        }
    }
};