/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 vector<int> v;
 void mid(TreeNode *root)
 {
     if(root != NULL)
     {
        mid(root->left);
        v.push_back(root->val);
        mid(root->right);
     }
 }
 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        if(root == NULL)
        {
            return v;
        }
        v.clear();
        mid(root);
        
        return v;
        
    }
};