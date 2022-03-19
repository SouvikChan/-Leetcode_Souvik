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
    vector<vector<int>>v;
    void solve(TreeNode *root,int t, vector<int>r){
        if(root==NULL) return ;
        r.push_back(root->val);
        t-=root->val;
        if(root->left==NULL && root->right==NULL && t==0) v.push_back(r);
        solve(root->left,t,r);
        solve(root->right,t,r);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return {};
        }
        vector<int> r;
        solve(root,targetSum,r);
        return v;
    }
};