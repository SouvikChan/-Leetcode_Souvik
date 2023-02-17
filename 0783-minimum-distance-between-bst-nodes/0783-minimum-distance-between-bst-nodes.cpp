/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution{
public:
    int res = INT_MAX;
    TreeNode *prev = NULL;
    int minDiffInBST(TreeNode *root)
    {

        if (root->left)
            minDiffInBST(root->left);
        if (prev)
            res = min(res, root->val - prev->val);
        prev = root;
        if (root->right)
            minDiffInBST(root->right);
        return res;
    }
};