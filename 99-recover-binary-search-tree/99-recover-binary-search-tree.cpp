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
    
    void inOrder(TreeNode* root,vector<TreeNode*> &in){
        if(root==NULL) return;
        inOrder(root->left,in);
        in.push_back(root);
        inOrder(root->right,in);
    }
    
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> in;
        inOrder(root,in);
        TreeNode* prev=in[0], *fir=NULL, *sec=NULL;
        for(int i=1;i<in.size();i++){
            if(prev->val >in[i]->val){
            if(fir==NULL) 
                fir=prev;
            sec=in[i];
        }
        prev=in[i];
        }
        swap(fir->val,sec->val);
    }
};