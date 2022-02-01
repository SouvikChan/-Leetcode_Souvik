class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        unordered_map<int, int> mp; 
        for (auto& it : stones) 
            mp[it % 3]++; 
        if (mp[0] & 1) return abs(mp[1] - mp[2]) >= 3; 
        return mp[1] and mp[2]; 
    }
};