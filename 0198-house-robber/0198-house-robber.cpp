class Solution {
public:
    int rob(vector<int>& nums) {
        int size= nums.size();
        vector<int> dp(size, 0);
        if(size == 0)
            return 0;
        if(size == 1)
            return nums[0];
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<size;++i){
            int take = nums[i] +dp[i-2];
            int skip = dp[i-1];
            dp[i] = max (take,skip);
        }
        return dp[size-1];
    }
};