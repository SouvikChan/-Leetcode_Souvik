class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map<int,int> mp;
        for(auto x:nums1) mp[x]++;
        for(auto it:nums2){
            if(mp[it]>0){
                res.push_back(it);
                mp[it]--;
            }
        }
        return res;
    }
};