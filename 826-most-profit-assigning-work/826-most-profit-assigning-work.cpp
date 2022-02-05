class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& workers) {
        sort(workers.begin() , workers.end() , greater<int>());
        int ans = 0;
        int n = profit.size();
        priority_queue<pair<int , int>>pq;
        for(int i=0 ; i<n ; i++){
            pq.push({profit[i] , difficulty[i]});
        }
        for(int i=0 ; i<workers.size() ; i++){
            if(pq.empty())break;
            while(!pq.empty() and pq.top().second > workers[i]){
                pq.pop();
            }
            if(pq.empty())break;
            ans += pq.top().first;
        }
        return ans;
    }
};