class Solution {
public:
    int dp[10000][1001]={};
    int longestArithSeqLength(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        if(n<2)
            return n;
        int max_diff= *max_element(begin(nums),end(nums))-
                    *min_element(begin(nums),end(nums));
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int diff=nums[i]-nums[j];
                diff=diff+max_diff;
                if(dp[i][diff]<dp[j][diff]+1)
                    dp[i][diff]=dp[j][diff]+1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<2*(max_diff+1);j++)
                ans=max(ans,dp[i][j]);
        }
        return ans+1;
    }
};