class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int ans=accumulate(piles.begin(),piles.end(),0);
        for(auto i:piles)pq.push(i);
        while(k--){
            int top=pq.top();
            pq.pop();
            pq.push(top-top/2);
            ans-=top/2;
        }
        return ans;
    }
};