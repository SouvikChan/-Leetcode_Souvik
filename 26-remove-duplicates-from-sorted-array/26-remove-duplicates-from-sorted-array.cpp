class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums) {
            if(mp[i]==0)
                mp[i]++;
            }
        int count=0;
        for(auto it:mp) {
        nums[count++]=it.first;
        }
    return count;
    }
};