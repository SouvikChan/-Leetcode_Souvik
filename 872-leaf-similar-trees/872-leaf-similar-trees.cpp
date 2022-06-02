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
    
    void Traverse(TreeNode* root, vector<int>&v){
        if(root==NULL) return ;
        if(root->left==NULL and root->right==NULL) v.push_back(root->val);
        if(root->left!=NULL) Traverse(root->left,v);
        if(root->right!=NULL) Traverse(root->right,v);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a;
        vector<int> b;
        Traverse(root1,a);
        Traverse(root2,b);
        return a==b;
    }
};