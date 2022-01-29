class Solution {
public:
    int secondHighest(string s) {
     int first=-1,second=-1;
        for(int i=0;i<s.size();i++){
            if(s[i] >= '0' && s[i] <= '9'){
                if(first < s[i]-48){
                    second=first;
                    first=s[i]-48;
                }
                else if(second < s[i]-48 && first != s[i]-48)
                    second = s[i]-48;
            }
        }
        return second;
    }
};