class Solution {
public:
   int dp[301][5001];
    
    int helper(int amount, vector<int>& coins, int idx)
    {
        if(idx == coins.size()) return 0;
        if(amount == 0) return 1;
        
        if(dp[idx][amount] != -1) return dp[idx][amount];
        
        if(coins[idx] > amount) return dp[idx][amount] = helper(amount, coins, idx + 1);
        
        return dp[idx][amount] = helper(amount - coins[idx], coins, idx) + helper(amount, coins, idx + 1);
    }
    
    int change(int amount, vector<int>& coins)
    {
        memset(dp, -1, sizeof(dp));
        
        return helper(amount, coins, 0);
    }
};