class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size();
        int ans=INT_MAX;
        int idx=-1;
        for(int i=0;i<n;i++){
            if(points[i][0]==x || points[i][1]==y){
                int s=abs(points[i][0]-x) + abs(points[i][1]-y);
                if(s<ans){
                    idx=i;
                    ans=s;
                }
            }
        }
        return idx;
    }
};