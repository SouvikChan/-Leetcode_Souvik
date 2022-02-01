class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int max=0;
        int dp[1<<17]={1};
        for(auto it: nums){
            for(int i=max;i>=0;i--){
                dp[i | it]+=dp[i];
            }
            max|=it;
        }
        return dp[max];
    }
};