class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int occ=nums.size()/2;
        unordered_map<int, int> tp;
        int ans;
        for(auto it:nums)
            tp[it]++;
        for(auto it:tp)
            if(it.second==occ)
                ans=it.first;
        return ans;
    }
};