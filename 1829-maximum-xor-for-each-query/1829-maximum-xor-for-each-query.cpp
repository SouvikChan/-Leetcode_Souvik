class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int temp=(1<<maximumBit)-1;
        int n=nums[0];
        for(int i=1;i<nums.size();i++){
            n^=nums[i];
            nums[i]=n^temp;
        }
        nums[0] =nums[0]^temp;
        reverse(nums.begin(), nums.end());
        return nums;
    }
};