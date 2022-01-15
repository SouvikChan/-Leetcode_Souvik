class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int idx=0;idx<nums.size();idx++){
            if(idx%10 ==nums[idx])
                return idx;
        }
        return -1;
    }
};