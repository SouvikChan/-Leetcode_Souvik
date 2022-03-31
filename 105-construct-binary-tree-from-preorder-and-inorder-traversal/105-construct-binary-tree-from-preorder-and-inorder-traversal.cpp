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
    
    TreeNode* solve(unordered_map<int, int>& mp, vector<int>& preorder, vector<int>& inorder, int preStart, int inStart, int inEnd)
    {
        if(preStart >= preorder.size() || inStart > inEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inIndex = mp[root->val];
        root->left = solve(mp, preorder, inorder, preStart + 1, inStart, inIndex - 1);
        root->right = solve(mp, preorder, inorder, preStart + inIndex - inStart + 1, inIndex + 1, inEnd);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mp;
        for(int i = 0; i < inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }
        return solve(mp, preorder, inorder, 0, 0, inorder.size());
    }
};