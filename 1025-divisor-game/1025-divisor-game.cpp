class Solution {
public:
    
    vector<int> dp;
    bool solve(int n){
        if(n==1)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        for(int i=1;i<n;i++){
            if(n%i==0 and !solve(n-i))
                return dp[n]=1;
        }
        return dp[n]=0;
    }
    
    bool divisorGame(int n) {
        dp.resize(n+1, -1);
        return solve(n);
    }
};