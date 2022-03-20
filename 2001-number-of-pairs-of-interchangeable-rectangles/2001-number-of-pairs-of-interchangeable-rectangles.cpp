class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long ans=0;
        unordered_map<double,int> mp;
        for(auto it:rectangles){
            double ratio=(double)it[0]/it[1];
            if(mp.find(ratio)!=mp.end()) ans+=mp[ratio];
            mp[ratio]++;
        }
        return ans;
    }
};