class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        if ( p.length() > s.length()) return v;
        int hash_p[26] = {0};
        for (int i = 0; i<p.length(); i++) {
            hash_p[p[i]-97]++;
        }
        int i = 0;
        int j = p.length()-1;
        int hash_s[26] = {0};
        
        for (int i = 0; i<p.length(); i++) {
            hash_s[s[i]-97]++;
        }
        
        while ( j<s.length()) {
            bool same = true;
            for(int k = 0; k<26; k++) {
                if ( hash_p[k] == hash_s[k]) {
                    continue;
                } else {
                    same = false;
                }
            }
            if ( same ) v.push_back(i);
            hash_s[s[i]-97]--;
            
            i++;
            j++;
            if ( j >= s.length() ) break;
            hash_s[s[j]-97]++;
        }
        return v;
    }
};