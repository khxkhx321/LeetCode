/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int max(int a, int b)
 {
     if(a>b)
     {
         return a;
     }
     return b;
 }
 
 int getDep(TreeNode *root, int dep)
 {
     if(root->left != NULL && root->right != NULL)
     {
         return max(getDep(root->left, dep+1), getDep(root->right, dep+1));
     }
     else if(root->left != NULL)
     {
         return getDep(root->left, dep+1);
     }
     else if(root->right != NULL)
     {
         return getDep(root->right, dep+1);
     }
     else
     {
         return dep;
     }
 }
 
class Solution {
public:
    int maxDepth(TreeNode *root) {
        if(root == NULL)
        {
            return 0;
        }
        return getDep(root, 1);
    }
};