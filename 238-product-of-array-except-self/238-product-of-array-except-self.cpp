class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size()-1,l=1,r=1;
        vector<int> ans(n+1,1);
        for(int i=0;i<=n;++i){
            ans[i]*=l;
            ans[n-i]*=r;
            l*=nums[i];
            r*=nums[n-i];
        }
        return ans;
    }
};