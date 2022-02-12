class Solution {
public:
    int n, m;
    int uniquePathsWithObstacles(vector<vector<int>>& A) {
        n=A.size(), m=A[0].size();
        vector<vector<int>> paths(n, vector<int>(m, -1));
        paths[n-1][m-1]=1;
        dp(paths, A, 0, 0);
        return paths[0][0];
    }
    int dp(vector<vector<int>>&paths, vector<vector<int>>&A, int i, int j){
        if(i<0 || i==n ||j<0|| j==m) return 0;
        if(A[i][j]==1) return paths[i][j]=0;
        if(paths[i][j]!=-1) return paths[i][j];
        return paths[i][j]= dp(paths, A, i+1, j) + dp(paths, A,i,j+1);
    }
};