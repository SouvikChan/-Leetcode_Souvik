class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx, st,ed;
        mx=st=ed=0;
        while(ed<nums.size()){
            if(nums[ed]==0)
                st=ed+1;
            mx=max(mx,ed-st+1);
            ed++;
        }
        return mx;
    }
};