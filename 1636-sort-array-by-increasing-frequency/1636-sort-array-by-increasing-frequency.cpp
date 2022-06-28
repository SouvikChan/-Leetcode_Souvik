class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto i:nums) mp[i]++;
        for(auto x:mp){
            pq.push({-1*x.second,x.first});
        }
        vector<int>ans;
        while(!pq.empty()){
            for(int i=0;i<-1*pq.top().first;++i)
                ans.push_back(pq.top().second);
            pq.pop();
        }
        // reverse(ans.begin(),ans.end());
        return ans;
    }
};