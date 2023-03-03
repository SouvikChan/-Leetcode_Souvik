class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size()) return -1;
        for(int i=0;i<haystack.size();i++){
            if (haystack.substr(i, needle.length()) == needle) return i;
        } 
        return -1;
    }
};