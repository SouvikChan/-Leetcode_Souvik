/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool check(TreeNode* root, TreeNode* lefte,TreeNode* righte){
        if(root==NULL) return true;
        if((lefte && lefte->val>=root->val) || (righte and righte->val<=root->val))
            return false;
        return check(root->left,lefte,root) && check(root->right,root,righte);
    }
    bool isValidBST(TreeNode* root) {
        return check(root,NULL,NULL);
    }
};