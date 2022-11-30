class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        set<int>ans;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto i:mp){
            ans.insert(i.second);
        }
        return ans.size()==mp.size() ? true:false;
    }
};