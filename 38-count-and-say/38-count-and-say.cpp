class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str=countAndSay(n-1);
        string str1="";
        int cnt=1;
        for(int i=0;i<str.size();i++){
            if(i+1<str.size() and str[i]==str[i+1]) cnt++;
            else{
                str1+=to_string(cnt);
                str1.push_back(str[i]);
                cnt=1;
            }
        }
        return str1;
    }
};