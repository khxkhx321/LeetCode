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
 
 void mid(TreeNode *root, int h)
 {
     if(root!= NULL)
     {
         mid(root->left, h+1);
         v.push_back(root->val);
         mid(root->right, h+1);
     }
     else
     {
         v.push_back(h);
     }
 }
 
 
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        v.clear();
        mid(root, 0);
        
        if(v.size() <= 1)
        {
            return true;
        }
        
        int len = v.size() - 1;
        for(int i=0;i<v.size(); i++)
        {
            if(v[i] != v[len - i])
            {
                return false;
            }
        }
        return true;
        
    }
};