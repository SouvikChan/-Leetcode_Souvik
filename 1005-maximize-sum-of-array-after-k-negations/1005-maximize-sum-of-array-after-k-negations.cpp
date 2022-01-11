class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        priority_queue<int, vector<int>,greater<int>> pq;
        for(auto i:nums)
            pq.push(i);
        while(k--){
            int a=pq.top();
            pq.pop();
            pq.push(-1*a);
        }
        int res=0;
        while(pq.size()>0){
            res+=pq.top();
            pq.pop();
        }
        return res;
    }
};