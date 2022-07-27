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
    
    TreeNode* head = NULL;
    void revPreOrder(TreeNode* node) {
        if (node->right) revPreOrder(node->right);
        if (node->left) revPreOrder(node->left);
        node->left = NULL, node->right = head, head = node;
    }
    
    void flatten(TreeNode* root) {
        if (root) revPreOrder(root);
    }
};