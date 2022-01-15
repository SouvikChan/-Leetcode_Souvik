class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp1;
        for(auto x:words1){
            mp1[x]++;
        }
        unordered_map<string,int> mp2;
        for(auto x:words2){
            mp2[x]++;
        }
        int cnt=0;
        for(auto x:mp1){
            if(mp2.find(x.first)!=mp2.end() && x.second==1 && mp2[x.first]==1)
                cnt++;
        }
        return cnt;
    }
};