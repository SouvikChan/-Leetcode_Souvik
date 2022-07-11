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
    
    void dfs(TreeNode* root,int currentLevel, int &maxHeight,vector<int>&ans){
        if(root==NULL) return;
        if(currentLevel>maxHeight){
            ans.push_back(root->val);
            maxHeight=currentLevel;
        }
        dfs(root->right,currentLevel+1,maxHeight,ans);
        dfs(root->left,currentLevel+1,maxHeight,ans);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> ans;
        int maxHeight=0;
        ans.push_back(root->val);
        dfs(root,0,maxHeight,ans);
        return ans;
    }
};