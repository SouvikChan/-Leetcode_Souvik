class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        vector<vector<int>>dp(row,vector<int>(col));
        int cnt=0;
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                if(i==row-1){
                    dp[i][j]=mat[i][j];
                }
                else if(j==col-1){
                    dp[i][j]=mat[i][j];
                }
                else{
                     if(mat[i][j]==0){
                         dp[i][j]=0;
                     }
                    else{
                        dp[i][j]=min({dp[i][j+1],dp[i+1][j+1],dp[i+1][j]})+1; 
                    }
                }
               cnt +=dp[i][j];
            }
        }
        return cnt;
    }
};