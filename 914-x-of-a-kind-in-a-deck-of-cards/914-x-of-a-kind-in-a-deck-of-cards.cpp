class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for(int i=0;i<deck.size();i++)
        {
            mp[deck[i]]++;
        }
        int ans=0;
        for(auto it:mp)
        {
            ans=__gcd(it.second,ans);
        }
        return ans>=2;
    }
};