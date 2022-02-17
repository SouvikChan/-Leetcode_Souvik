class Solution {
public:
    
    void solve(vector<int>&candidates, int target, vector<vector<int>> &ans,vector<int>&back,int i){
        if(target==0){
            ans.push_back(back);
            return;
        }
        while(i<candidates.size() and target-candidates[i]>=0){
            back.push_back(candidates[i]);
            solve(candidates,target-candidates[i],ans,back,i);
            ++i;
            back.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> back;
        vector<vector<int>> ans;
        solve(candidates,target,ans,back,0);
        return ans;
    }
};