class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cnt=0;
        int maxi=0, i=0,j=0,k;
        while(i<nums.size()and j<nums.size()){
            if(nums[j]==0){
                cnt++;
                if(cnt>1){
                    i=k+1;
                    cnt=1;
                }
                k=j;
            }
            j++;
            maxi=max(maxi,j-i);
        }
        return maxi-1;
    }
};