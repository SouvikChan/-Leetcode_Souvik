class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        priority_queue<int,vector<int>,greater<int> > pq;
        int sum=0;
        for(int i=0;i<costs.size();i++)
            sum+=costs[i][0];
        for(int i=0;i<costs.size();i++) 
           pq.push(costs[i][1]-costs[i][0]);
        int n=costs.size()/2;
        while(n>0) 
        {
            sum+=pq.top();
            pq.pop();
            n--;

        }
        return sum;
    }
};