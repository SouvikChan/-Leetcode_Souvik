class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int, int>> ans;
        for (auto i = 0; i < plantTime.size(); ++i)
            ans.push_back({growTime[i], plantTime[i]});
        sort(begin(ans), end(ans));
        int res = 0;
        for (auto [g, p] : ans)
            res = max(res, g) + p;
        return res;
    }
};