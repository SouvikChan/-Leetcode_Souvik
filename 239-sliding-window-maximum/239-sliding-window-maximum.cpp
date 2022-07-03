class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        int l = 0, r = k-1, n = nums.size();
        for(int i=0; i<r; i++) pq.push({nums[i], i});
        while(r < n){
            while(pq.empty()==false && pq.top().second < l)
                pq.pop();
            pq.push({nums[r], r});
            ans.push_back(pq.top().first);
            l++, r++;
        }
        return ans;
    }
};