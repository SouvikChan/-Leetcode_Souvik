class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(j+nums[j]>=i and nums[j]!=0){
                    if(dp[j]!=INT_MAX){
                        dp[i]=min(dp[i],dp[j]+1);
                    }
                }
            }
        }
        return dp[n-1];
    }
};