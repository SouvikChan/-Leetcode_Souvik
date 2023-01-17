class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flipOne=0, cntFlip=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='1') flipOne++;
            else cntFlip++;
            cntFlip=min(flipOne,cntFlip);
        }
        return cntFlip;
    }
};