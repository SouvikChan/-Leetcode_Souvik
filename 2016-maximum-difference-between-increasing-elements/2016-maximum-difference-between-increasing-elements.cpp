class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int dif=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j] && i<j){
                    dif=max((nums[j]-nums[i]),dif);
                }
            }
        }
        if(dif==0) 
            return -1;
        return dif;
    }
};