class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(auto i:magazine)mp[i]++;
        for(auto x:ransomNote){
            if(!mp[x])return false;
            mp[x]--;
        }
        return true;
    }
};