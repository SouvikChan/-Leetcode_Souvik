class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        priority_queue<int> pq;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto it:mp)
            pq.push(it.second);
        int n=arr.size()/2;
        int res=0;
        int m=arr.size();
        while(m>n){
            res++;
            m-=pq.top();
            pq.pop();
        }
        return res;
    }
};