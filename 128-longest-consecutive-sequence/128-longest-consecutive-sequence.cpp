class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int max_cnt=0;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1) cnt++;
            else if(nums[i+1]==nums[i]) continue;
            else{
                max_cnt=max(max_cnt,cnt+1);
                cnt=0;
            }
        }
        max_cnt=max(max_cnt,cnt+1);
        return max_cnt;
    }
};