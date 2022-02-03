class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> mp;
        for(int x : nums1){
            for(int y : nums2){
                mp[x+y]++;
            }
        }
        int cnt = 0;
        for(int x : nums3){
            for(int y : nums4){
                if(mp.count((-(x+y)))==1){
                    cnt+= mp[(-(x+y))];
                }
            }
        }
        return cnt;
    }
};