class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str=s+s;
        string str2=str.substr(1,2*s.size()-2);
        if(str2.find(s)==-1){
            return false;
        }
        return true;
    }
};