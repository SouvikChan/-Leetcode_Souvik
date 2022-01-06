class Solution {
public:
     int Stairs(int n, vector<int>& dp){
        if(n<=1) return 1;
        if(dp[n] != -1) return dp[n];
        else return dp[n] = Stairs(n-1, dp) + Stairs(n-2, dp);
    }
    int climbStairs(int n) {
        if(n<=1) return 1;
        vector<int> dp(n+1,-1);
        return Stairs(n,dp);
    }
};