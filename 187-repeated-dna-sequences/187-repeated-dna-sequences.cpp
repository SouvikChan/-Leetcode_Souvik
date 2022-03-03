class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        unordered_map<string,int> mp;
        int low=0, high=10;
        while(low!=s.size()){
            if(s.substr(low,high).size()<10) break;
            mp[s.substr(low,high)]++;
            low++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second>1)
                ans.push_back(i->first);
        }
        return ans;
    }
};