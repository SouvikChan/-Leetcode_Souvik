class Solution {
public:
    
    /*
    int solve(vector<int>&nums,int i,vector<int>&dp){
        int n=nums.size();
        if(n<=i) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick=0+solve(nums,i+1,dp);
        int nonpick=nums[i]+solve(nums,i+2,dp);
        return dp[i]=max(pick,nonpick);
        
    }*/
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>dp(n+1,-1);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;++i){
            int pick=0+dp[i-1];
            int nonpick=nums[i]+dp[i-2];
            dp[i]=max(pick,nonpick);
        }
        return dp[n-1];
    }
};