class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
          map<char,int> mp;
        for(auto ch: words[0]){
            mp[ch]++;
        }
        map<char,int>cur;
        for(auto& word:words){
            cur.clear();
            for(auto ch:word){
                cur[ch]++;
            }
            for(auto& it:mp){
                it.second = min(it.second,cur[it.first]);
            }
        }
        vector<string> arr;
        string s;
        for(auto& it:mp){
            while(it.second!=0){
                s=it.first;
                arr.push_back(s);
                it.second--;
            }
        }
        return arr;
    }
};