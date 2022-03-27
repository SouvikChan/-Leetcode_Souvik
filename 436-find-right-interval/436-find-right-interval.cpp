class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int> ans,arr;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) arr.push_back(intervals[i][0]);
        for(int i=0;i<n;i++) 
            mp[intervals[i][0]]=i;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;++i){
            auto it=upper_bound(arr.begin(),arr.end(),intervals[i][1]-1);
            if(it==arr.end()) ans.push_back(-1);
            else ans.push_back(mp[*it]);
        }
        return ans;
    }
};