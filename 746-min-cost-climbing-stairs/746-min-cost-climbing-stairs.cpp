class Solution {
public:
    int dp[1000 + 1];
    
    int recursion(vector<int>& arr, int i)
    {
        if (i > arr.size())
            return INT_MAX - 1000;
        if (i == arr.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        return dp[i] = min(arr[i] + recursion(arr, i + 1), arr[i] + recursion(arr, i + 2));
    }
    
    int minCostClimbingStairs(vector<int>& cost) 
    {
        memset(dp, -1, sizeof(dp));
        return min(recursion(cost, 0), recursion(cost, 1));      
    }
};