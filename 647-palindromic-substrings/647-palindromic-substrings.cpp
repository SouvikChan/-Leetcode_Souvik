class Solution {
public:
    
    int dp[1001][1001];
    bool palin(string &s, int i,int j){
        if(i>=j) return true;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]!=s[j]){
            dp[i][j]=0;
            return dp[i][j];
        }
        return dp[i][j]=palin(s,i+1,j-1);
    }
    
    int countSubstrings(string s) {
        memset(dp, -1, sizeof(dp));
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;++j){
                if(palin(s, i, j)) cnt++;
            }
        }
        return cnt;
    }
};