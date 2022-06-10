class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, j=0;
        unordered_map<char,int>window;
        int res=0;
        while(j<s.size()){
            char c=s[j];
            window[c]++;
            while (window[c] > 1) { 
                char d = s[i];
                i++;
                window[d] --;
            }
            j++;
            res = max(res, j - i);
        }
        return res;
    }
};