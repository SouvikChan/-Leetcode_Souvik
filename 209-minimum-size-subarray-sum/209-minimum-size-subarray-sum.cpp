class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, j=0, sum=0, size=INT_MAX;
        while(j<nums.size()){
            sum += nums[j];
            if(sum>=target) { 
                size = min(size, j-i+1);
                j= ++i;
                sum=0;
            } else {
                j++;
            }
        }
        
        return size==INT_MAX ? 0 : size;
    }
};