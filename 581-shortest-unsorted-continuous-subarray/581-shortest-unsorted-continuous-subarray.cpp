class Solution {
public:
    
   
    
    int findUnsortedSubarray(vector<int>& nums) {
       int res=0;
        int i=0;
        int j=nums.size()-1;
        int c_maxi=INT_MAX;
        int c_mini=INT_MIN;
        int start=0,end=-1;
        while(j>=0){
            if(nums[i]>=c_mini) c_mini=nums[i];
            else end=i;
            if(nums[j]<=c_maxi) c_maxi=nums[j];
            else start=j;
            ++i;
            --j;
        }
        return end-start+1;
    }
};