#define ll long long

class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int>pq;
        ll sum=0;
        for(int i=0;i<target.size();++i){
            pq.push(target[i]);
            sum+=target[i];
        }
        while(pq.top()!=1){
            sum-=pq.top();
            if(sum==0 or sum>=pq.top())return false;
            ll old=pq.top()%sum;
            if(sum!=1 and old==0) return false;
            pq.pop();
            pq.push(old);
            sum+=old;
        }
        return true;
    }
};