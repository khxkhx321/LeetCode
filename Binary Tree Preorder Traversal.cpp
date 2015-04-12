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
 void pre(TreeNode *root)
 {
     if(root != NULL)
     {
        v.push_back(root->val);
        pre(root->left);
        pre(root->right);
     }
 }
 
 
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {

        if(root == NULL)
        {
            return v;
        }
        v.clear();
        pre(root);
        
        return v;
        
    }
};