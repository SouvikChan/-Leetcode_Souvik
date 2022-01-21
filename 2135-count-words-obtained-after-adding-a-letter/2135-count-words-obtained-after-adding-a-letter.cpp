class Solution {
public:
    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
        unordered_map<string,int> mp;
        for(auto it:startWords){
            sort(it.begin(),it.end());
            mp[it]++;
        }
        int ans=0;
        for(auto it:targetWords){
            string s;
            for(int i=0;i<it.size();i++){
                s=it.substr(0, i) +it.substr(i+1, it.size()-i-1);
                sort(s.begin(),s.end());
                if(mp.find(s)!=mp.end()){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};