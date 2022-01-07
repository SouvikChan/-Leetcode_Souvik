class Solution {
public:
    int ans=0;
    void sol(int i, vector<int>& res, vector<int> nums){
        if(i==nums.size()){
            int t=0;
            for(auto &i : res)
                t^=i;
            ans+=t;
            return;
        }
        sol(i+1,res,nums);
        res.push_back(nums[i]);
        sol(i+1,res,nums);
        res.pop_back();
        return;
    }
    int subsetXORSum(vector<int>& nums) {
        ans=0;
        vector<int> res;
        sol(0,res,nums);
        return ans;
    }
};