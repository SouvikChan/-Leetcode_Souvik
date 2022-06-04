class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        for(i=nums.size()-1;i>0;--i){
            if(nums[i]>nums[i-1]){
                sort(nums.begin()+i,nums.end());
                int j=i;
                while(nums[i-1]>=nums[j]) j++;
                swap(nums[i-1],nums[j]);
                break;
            }
        }
        if(i==0 ) sort(nums.begin(),nums.end());
    }
};