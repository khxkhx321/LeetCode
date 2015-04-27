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
 
 void post(TreeNode *root)
 {
     if(root != NULL)
     {
         post(root->left);
         post(root->right);
         v.push_back(root->val);
     }
     
 }
 
class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        v.clear();
        post(root);
        return v;
    }
};