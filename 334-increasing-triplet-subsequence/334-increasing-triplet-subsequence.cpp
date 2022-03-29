class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3) return false;
        int low=INT_MAX, mid=INT_MAX;
        for(int i=0;i<nums.size();++i){
            if(nums[i]>mid)
                return true;
            if(nums[i]<low)
                low=nums[i];
            else if(nums[i]>low and nums[i]<mid)
                mid=nums[i];
        }
        return false;
    }
};