class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int t=n-1;
        if(t==0) return true;
        if(nums[0]==0) return false;
        for(int i=0;i<n-1;i++){
            if(nums[i]+i>ans && ans>=i){
                ans=nums[i]+i;
            }
        }
        if(ans>=t) return true;
        return false;
    }
};