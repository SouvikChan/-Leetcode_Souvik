class Solution {
public:
    int dp[500002] = {-1};
    int fun(int n){
        if(n==1) return 0;
        if(dp[n]) return dp[n];
        if(n%2) return dp[n]=1+fun(3*n+1);
        return dp[n]=1 + fun(n/2);
    }
    
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>> cnt;
        for(int i=lo;i<=hi;i++){
            int x=fun(i);
            cnt.push_back({x,i});
        }
        sort(cnt.begin(),cnt.end());
        return cnt[k-1].second;
    }
};