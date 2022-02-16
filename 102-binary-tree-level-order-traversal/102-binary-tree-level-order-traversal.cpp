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
    
    void solve(vector<vector<int>> &n, TreeNode* node,int level){
        if(node==NULL) return;
        if(n.size()-1<level or n.size()==0)
            n.push_back({node->val});
        else
            n[level].push_back(node->val);
        solve(n,node->left,level+1);
        solve(n,node->right,level+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ord;
        solve(ord,root,NULL);
        return ord;
    }
};