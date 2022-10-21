class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i = 0,j = 0;
        for(; j<nums.size(); j++){
            if(j>k){
                mp[nums[i++]]--;
            }
            if(mp[nums[j]]>0){
                return true;
            }
            mp[nums[j]]++;
        }
        return false;
    }
};