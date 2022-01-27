class Solution {
public:
    
    int K;
    int dp[500][500];
    int solve(vector<int> & arr, int low, int high){
        if(low>high) return 0;
        if(low==high) return dp[low][high]=arr[low];
        if(dp[low][high]!=-1) return dp[low][high];
        int ans=INT_MIN;
        int max_till=INT_MIN;
        for(int i=low;i<=min(low+K-1,high);i++){
            max_till=max(arr[i],max_till);
            ans=max((i-low+1)*max_till+solve(arr,i+1,high),ans);
        }
        return dp[low][high]=ans;
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp, -1, sizeof(dp));
        K=k;
        int n=arr.size();
        return solve(arr,0,n-1);
    }
};