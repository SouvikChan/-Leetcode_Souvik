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
    vector<TreeNode *> ans;
    void inOrder(TreeNode* root){
        if(root==NULL) return;
        inOrder(root->left);
        ans.push_back(root);
        inOrder(root->right);
    }
    TreeNode* buildtree(int st, int en)
    {
        if(st>en) 
            return NULL;
        int mid=st+(en-st)/2;
        TreeNode* root=ans[mid];
        root->left=buildtree(st,mid-1);
        root->right=buildtree(mid+1,en);
        return root;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL) return NULL;
        inOrder(root);
        int n=ans.size();
        root=buildtree(0,n-1);
        return root;
    }
};