class Solution {
public:
    map<int,int>dp;
    long solve(long n){
        if(n==1) return dp[n];
        if(dp[n]==NULL){
            if(n%2==0) 
                dp[n]=solve(n/2)+1;
            else
                dp[n]=min(solve(n-1),solve(n+1))+1;
        }
            return dp[n];
    }
    
    int integerReplacement(int n) {
        return solve((long)n);
    }
};