class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int h=heights.size();
        int i=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(i=0;i<h-1;++i){
            if(heights[i]<heights[i+1]) pq.push(heights[i+1]-heights[i]);
            if(pq.size()>ladders){
                int temp=pq.top();
                pq.pop();
                bricks-=temp;
                if(bricks<0) break;
            }
        }
        return i;
    }
};