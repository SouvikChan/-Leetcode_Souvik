class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
//         O(N)
        // int n=nums.size();
        // auto cnt=0;
        // for(int i=0;i<n;++i){
        //     cnt^=nums[i];
        // }
        // return cnt;
        
//         Binary Search Approach

//        O(log(N))        
        int low=0, high=nums.size()-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==nums[mid^1]) low=mid+1;
            else high=mid-1;
        }
        return nums[low];
    }
};