class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto it : mp) {
            if(it.second>1){
                return it.first;
            }
        }
        return 0;
    }
};