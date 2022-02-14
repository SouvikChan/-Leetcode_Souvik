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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return 0;
        else if(root->val>key) root->left=deleteNode(root->left,key);
        else if(root->val<key) root->right=deleteNode(root->right,key);
        else if(root->val==key){
            if(root->left==NULL and root->right==NULL) return NULL;
            else if(!root->left or !root->right){
                if(root->left) return root->left;
                else return root->right;
            }
            TreeNode* temp=root->left;
            while(temp->right) temp=temp->right;
            root->val=temp->val;
            root->left=deleteNode(root->left,temp->val);
        }
        return root;
    }
};