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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(!root)return ans;
        q.push(root);
        int flag=0;
        while(!q.empty()){
            vector<int>need;
            int n=q.size();
            for(int i=0;i<n;++i){
                TreeNode* node=q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                need.push_back(node->val);
            }
              if(flag==0)
              {
                  ans.push_back(need);
                  flag=1;
              }
             else{
                 reverse(need.begin(),need.end());
                 flag=0;
                 ans.push_back(need);
             }
        }
        return ans;
    }
};