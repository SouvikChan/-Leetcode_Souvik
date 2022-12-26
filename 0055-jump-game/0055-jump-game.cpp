class Solution {
public:
    
    bool solve(int i, vector<int>nums,vector<int>&dp){
        int n=nums.size();
        if(i==n-1) return true;
        if(dp[i]!=0) return dp[i];
        int reachable = i+nums[i];
        for(int j=i+1;j<=reachable;++j){
             if(solve(j,nums,dp)){
                return dp[i] = true;
            }      
        }
        return dp[i]=false;
    }
    
    bool canJump(vector<int>& nums) {
          int n=nums.size();
        vector<int> dp(n,0);
        dp[0]=true;
        
        for(int i=1;i<n;i++){
             for(int j=i-1;j>=0;j--){
                 if(dp[j] && j+nums[j]>=i){
                     dp[i]=true;
                     break;
                 }       
             }           
        }
        return dp[n-1];
    }
};