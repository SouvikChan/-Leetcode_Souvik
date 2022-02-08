class Solution {
public:
    
    vector<int> dp;
    
    int arr(int n){
        if(dp[n] !=-1 ) return dp[n];
        if(n==1) return 1;
        if(n==2) return 2;
        if(n%2==0){
            dp[n] =n/2 +arr(n/2);
        }
        else dp[n]= arr((n+1)/2);
        return dp[n];
    }
    vector<int> beautifulArray(int n) {
        if(dp.size()==0){
            dp=vector<int>(n+1,-1);
        }
        if(n==1) return {1};
        if(n==2) return {1,2};
        if(n==3) return {1,3,2};
        vector<int> ans=beautifulArray(n-1);
        int k=arr(n)-1;
        ans.insert(ans.begin()+k, n);
        return ans;
    }
};