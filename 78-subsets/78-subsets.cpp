class Solution {
public:
    vector<int>ans;
    vector<vector<int>>res;
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,0);
        return res;
    }
    void solve(vector<int>&nums,int i){
        if(i==nums.size()){
            res.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        solve(nums,i+1);
        ans.pop_back();
        solve(nums,i+1);
    }
};