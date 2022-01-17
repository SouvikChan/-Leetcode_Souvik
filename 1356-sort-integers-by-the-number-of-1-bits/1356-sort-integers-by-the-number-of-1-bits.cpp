class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto itr: arr){
            int cnt = 0;
            auto t = itr;
            while(itr){
                itr = (itr&(itr-1));
                cnt++;
            }
            pq.push({cnt, t});
        }
        vector<int> v;
        while(pq.size()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};