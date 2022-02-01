class Solution {
public:
    int ans=0;
    void solve(unordered_map<char,int> &mp){
        for(auto it: mp){
            if(it.second>0){
                mp[it.first]--;
                ans++;
                solve(mp);
                mp[it.first]++;
            }
        }
    }
    
    int numTilePossibilities(string tiles) {
        unordered_map<char,int> mp;
        for(auto x:tiles){
            mp[x]++;
        }
        solve(mp);
        return ans;
    }
};