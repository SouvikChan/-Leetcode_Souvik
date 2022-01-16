class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int right = 0, left = 0;
        for (int &num : nums)
            right += num;
        for (int i = 0; i < n; ++i) {
            right -= nums[i];
            if (left == right) 
                return i;
            left += nums[i];
        }
        return -1;
    }
};