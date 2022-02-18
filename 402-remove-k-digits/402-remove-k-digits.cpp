class Solution {
public:
    string removeKdigits(string num, int k) {
        string s="";
        s += num[0];
        for(int i=1;i<num.size();i++){
            while(k && s.back()>num[i]){
                s.pop_back();
                k--;
            }
            s += num[i];
        }
        while(k && !s.empty()){
            s.pop_back();
            k--;
        }
        if(s.length()>1 && s[0]=='0'){
            reverse(s.begin(),s.end());
            while(s.back()=='0'){
                s.pop_back();
            }
            reverse(s.begin(),s.end());
        }
        if(s==""){
            return "0";
        }
        return s;
    }
};