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
    
    int ans=0;
    
    void cntPaths(TreeNode* root,set<int>s){
        if(s.find(root->val)!=s.end()) s.erase(root->val);
        else s.insert(root->val);
        if(!root->left and !root->right){
            if(s.size()<=1)ans++;
            return ;
        }
        if(root->left) cntPaths(root->left,s);
        if(root->right) cntPaths(root->right,s);
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root==NULL) return 0;
        set<int>s;
        cntPaths(root,s);
        return ans;
        
    }
};