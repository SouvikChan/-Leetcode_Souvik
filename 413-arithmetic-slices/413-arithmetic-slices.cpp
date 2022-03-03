class Solution {
public:

    int numberOfArithmeticSlices(vector<int>& nums) {
        int n= nums.size();
        if(n<3) return 0;
        int dp=nums[1]-nums[0];
        int l=2;
        int res=0;
        for(int i=2;i<n;i++){

            if(nums[i]==nums[i-1]+dp) l++;
            else{
                dp=nums[i]-nums[i-1];
                l=2;
            }
            if(l>2) res+=(l-3+1);
           
        }
        return res;
    }
};