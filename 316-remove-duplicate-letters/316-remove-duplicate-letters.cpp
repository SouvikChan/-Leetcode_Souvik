class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> cnt(26,0)  , seen(26,0);
        string res = "";
        int n = s.size();
        for(int i = 0; i<n; ++i)
            cnt[s[i] - 'a']++;
        for(int i = 0; i<n; ++i)
        {
            cnt[s[i] - 'a']--;
            if(!seen[s[i]- 'a'])
            {
                while(res.size() > 0 && res.back() > s[i] && cnt[res.back() - 'a'] > 0)
                {
                    seen[res.back() - 'a'] = 0;
                    res.pop_back();
                }
                res += s[i];
                seen[s[i] - 'a'] = 1;
            }
        }
        return res;
    }
};