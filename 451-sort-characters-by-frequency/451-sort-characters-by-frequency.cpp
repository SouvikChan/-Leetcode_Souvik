class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto x: s) mp[x]++;
        priority_queue<pair<int,char>>pq;
        for(auto i : mp){
            pq.push({i.second,i.first});
        }
        string ans="";
        while(!pq.empty()){
            char temp=pq.top().second;
            int freq=pq.top().first;
            while(freq--) ans+=temp;
            pq.pop();
        }
        return ans;
    }
};