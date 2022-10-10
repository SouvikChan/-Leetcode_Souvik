class Solution {
public:
    
    
    int solve(vector<int>&nums,int i,vector<int>&dp){
        int n=nums.size();
        if(n<=i) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick=0+solve(nums,i+1,dp);
        int nonpick=nums[i]+solve(nums,i+2,dp);
        return dp[i]=max(pick,nonpick);
        
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return solve(nums,0,dp);
    }
};