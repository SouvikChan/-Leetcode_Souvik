class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>mp;
        for(auto i:s) mp[i]++;
        priority_queue<pair<int,char>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(!pq.empty()){
            char temp=pq.top().second;
            int freq= pq.top().first;
            while(freq--){
                ans+=temp;
            }
            pq.pop();
        }
        return ans;
    }
};