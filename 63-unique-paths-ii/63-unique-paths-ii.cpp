class Solution {
public:
    
    int helper(vector<vector<int>>&grid,int i, int j,int m, int n,vector<vector<int>>&dp){
        if(i<0 || j<0 || i>=m || j>=n) return 0;
        if(grid[i][j]) return 0;
        if(i==m-1 && j==n-1 && !grid[i][j]) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=helper(grid,i+1,j,m,n,dp)+helper(grid,i,j+1,m,n,dp);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return helper(obstacleGrid, 0, 0,m, n,dp);
    }
};