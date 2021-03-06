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
     TreeNode *solve(int postEnd, int inStart, int inEnd, vector<int> &inorder, vector<int> &postorder){
        if (postEnd < 0 || inStart > inEnd)
            return NULL;
        TreeNode *result = new TreeNode(postorder[postEnd]);
        int inIndex = 0;
        for (int i = inStart; i <= inEnd; i++)
            if (inorder[i] == result->val) inIndex = i;
        result->right = solve(postEnd - 1, inIndex + 1, inEnd, inorder, postorder);
        result->left = solve(postEnd - inEnd + inIndex - 1, inStart, inIndex - 1, inorder, postorder);
        return result;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postEnd = postorder.size() - 1;
        int inStart = 0;
        int inEnd = inorder.size() - 1;
        return solve(postEnd, inStart, inEnd, inorder, postorder);
    }
};