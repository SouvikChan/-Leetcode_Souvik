class Solution {
public:
    int calculate(string s) {
        int sum=0;
        long long last=0, last_res=1;
        char last_operator='+';
        if(s.size()<1) return sum;
        int i=0, sign=1;
        while(i<s.size()){
            if(s[i]==' '){
                ++i;
                continue;
            }
            if(s[i]=='+' || s[i]=='-'){
                sum+=last_res*sign;
                sign=s[i++]=='+'?1:-1;
                last_res=1;
                last_operator='+';
            }
            else if(s[i]=='/' || s[i]=='*'){
                last_operator=s[i];
                ++i;
            }
            if(isdigit(s[i])){
                last=0;
                while(i<s.size() and isdigit(s[i])){
                    last=last*10+s[i]-'0';
                    i++;
                }
                if(last_operator=='*') last_res=last_res*last;
                else if(last_operator=='/') last_res/=last;
                else last_res=last;
            }
        }
        sum+=last_res*sign;
        return sum;
    }
};