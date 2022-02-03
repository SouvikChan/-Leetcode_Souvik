class Solution {
public:
    string reverseStr(string s, int k) {
        int low=0;
        int high=min(k,(int)s.length());
        while(low<s.length()){
            reverse(s.begin()+low,s.begin()+high);
            low+=2*k;
            high=min(low+k,(int)s.length());
        }
        return s;
    }
};