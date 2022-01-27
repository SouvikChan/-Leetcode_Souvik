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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        if(n==1){
            TreeNode* root =new TreeNode(0);
            ans.push_back(root);
            return ans;
        }
        
        for(int left=1;left<n-1;left+=2){
            vector<TreeNode*> left_Tree;
            vector<TreeNode*> right_Tree;
            left_Tree=allPossibleFBT(left);
            right_Tree=allPossibleFBT(n-left-1);
            for(TreeNode* l:left_Tree)
                for(TreeNode* r:right_Tree){
                    TreeNode* root=new TreeNode(0);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                }
        }
            return ans;
    }
};