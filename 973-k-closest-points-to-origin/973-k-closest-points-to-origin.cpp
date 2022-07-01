class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans(k);
        priority_queue<vector<int>>pq;
        for(auto i : points){
            int x=i[0], y=i[1];
            pq.push({x*x+y*y,x,y});
            if(pq.size()>k)
                pq.pop();
        }
         for (int i = 0; i < k; ++i) {
            vector<int> top=pq.top();
            pq.pop();
            ans[i] = {top[1], top[2]};
        }
        return ans;
    }
};