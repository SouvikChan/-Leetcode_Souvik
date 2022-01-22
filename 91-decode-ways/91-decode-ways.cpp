class Solution {
public:
    int dp[102];
    int solve(string s, int idx){
        if(idx==s.size()) return 1;
        if(idx>s.size()) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int cnt=0;
        for(int i=idx; i<idx+2;i++){
            string str=s.substr(idx,i-idx+1);
            int cnt1= stoi(str);
            if(str[0]!='0' && cnt1>0 && cnt1<=26){
                cnt+=solve(s,i+1);
            }
        }
        return dp[idx]=cnt;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(s,0);
    }
};