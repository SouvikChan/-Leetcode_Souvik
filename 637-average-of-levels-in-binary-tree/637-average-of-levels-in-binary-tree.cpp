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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            long long sum=0, n=q.size();
            for(int i=0;i<n;++i){
                TreeNode* top=q.front();
                q.pop();
                if(top->left!=NULL) q.push(top->left);
                if(top->right!=NULL) q.push(top->right);
                sum=sum+top->val;
            }
            ans.push_back((double)sum/n);
        }
        return ans;
    }
};