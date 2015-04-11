/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool isSame(TreeNode *p, TreeNode *q)
 {
     if(p == NULL && q== NULL)
     {
         return true;
     }
     else if(p == NULL && q != NULL)
     {
         return false;
     }
     else if(p != NULL &&  q == NULL)
     {
         return false;
     }
     else
     {
         if(p -> val != q -> val)
         {
             return false;
         }
         else
         {
            return isSame(p->left, q->left) && isSame(p->right, q->right);
         }
     }
     
 }
 
 
class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        return isSame(p, q);
    }
};