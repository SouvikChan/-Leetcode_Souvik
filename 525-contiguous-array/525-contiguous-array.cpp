class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    unordered_map<int, int> m;
	m.insert({0, 0});
	int sum = 0, ans = INT_MIN;

	for (int j = 1; j <= nums.size(); j++) {
		sum += nums[j - 1];
		int eqn = 2 * sum - j;

		if (m.count(eqn) == 0) {
			m[eqn] = j;
			continue;
		}
		ans = max(ans, j - m[eqn]);
	}
    if(ans==INT_MIN)
        return 0;
	return ans;
    }
};