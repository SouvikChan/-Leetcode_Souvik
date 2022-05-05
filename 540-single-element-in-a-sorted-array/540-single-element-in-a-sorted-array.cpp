class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        auto cnt=0;
        for(int i=0;i<n;++i){
            cnt^=nums[i];
        }
        return cnt;
    }
};