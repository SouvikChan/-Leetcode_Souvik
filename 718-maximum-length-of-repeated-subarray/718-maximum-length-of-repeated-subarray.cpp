class Solution {
public:
    
    vector<vector<int>>dp;
    int ans=0;
    
    int solve(vector<int>& nums1, vector<int>& nums2, int i, int j) {
		if(i >= nums1.size() || j >= nums2.size()) return 0;
		if(dp[i][j] != -1) return dp[i][j];
		solve(nums1, nums2, i+1, j);
        solve(nums1, nums2, i, j+1);
		dp[i][j] = nums1[i] == nums2[j] ? solve(nums1, nums2, i+1, j+1) + 1 : 0;  
		ans = max(ans, dp[i][j]);
		return dp[i][j];
	}
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        dp.resize(size(nums1), vector<int>(size(nums2), -1));
		solve(nums1, nums2, 0, 0);
		return ans;
    }
};