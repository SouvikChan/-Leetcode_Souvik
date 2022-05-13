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
    
    int maxLevelSum(TreeNode* root) {
        int ans,sum=INT_MIN,level=0;
		queue<TreeNode*> q;
		q.push(root);
		while(!q.empty()){
			int n=q.size();
			int curr=0;
			level++;
			while(n--){
				TreeNode *f=q.front();
				q.pop();
				curr+=f->val;
				if(f->left) q.push(f->left);
				if(f->right) q.push(f->right);
			}
			if(curr>sum)
			{
				sum=curr;
				ans=level;
			}
		}
		return ans;
    }
};