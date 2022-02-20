class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n <= 1)
            return n;
        sort(intervals.begin(), intervals.end());
        int ans = 1;
        int l = intervals[0][0], r = intervals[0][1];
        for(int i = 1; i < n; i++){
            if(intervals[i][1] > r){
                if(intervals[i][0] > l){
                    l = intervals[i][0]; 
                    ans++;
                }
                r = intervals[i][1];
            }
        }
        return ans;
    }
};