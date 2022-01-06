class Solution {
public:
    int dp[50]={0};
    int fib(int n) {
    if (n == 1)
        return dp[n]=n;
    if (n == 0)
       return dp[n]=n;
    if (dp[n] != 0)
        return dp[n];
    return dp[n]=fib(n - 1) + fib(n - 2);
    }
};