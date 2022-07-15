class Solution {
public:
    
    int dfs(int i, int j,vector<vector<int>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m) return 0;
        if(grid[i][j]==2 || grid[i][j]==0) return 0;
        grid[i][j]=2;
        return 1+dfs(i+1,j,grid)+dfs(i-1,j,grid)+dfs(i,j+1,grid)+dfs(i,j-1,grid);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea=0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]==1){
                    int cnt=dfs(i,j,grid);
                    maxArea=max(cnt,maxArea);
                }
            }
        }
        return maxArea;
    }
};