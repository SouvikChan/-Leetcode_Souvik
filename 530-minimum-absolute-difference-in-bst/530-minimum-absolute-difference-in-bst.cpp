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
    int ans = INT_MAX;
    TreeNode *prev = NULL;
    int getMinimumDifference(TreeNode* root) {
        traverse(root);
        return ans;
    }
    void traverse(TreeNode *root){
        if(!root) return;
        traverse(root->left);
        if(prev) ans = min(ans, abs(root->val - prev->val));
        prev = root;
        traverse(root->right);
    }
};