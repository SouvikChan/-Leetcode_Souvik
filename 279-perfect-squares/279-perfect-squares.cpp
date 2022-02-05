class Solution {
public:
    vector<int> dp= vector<int> (10001,-1);
    int numSquares(int n) {
        if(n==0) return 0;
        if(n<0) return INT_MAX;
        if(dp[n]!=-1) return dp[n];
        int mini=INT_MAX;
        for(int i=1;n -(i*i)>= 0;i++){
            mini = min(mini, numSquares(n - (i*i)));
        }
        return dp[n] = 1 + mini; 
    }
};