class Solution {
public:
    int calculate(string s) {
        int ans = 0;
        int sum=0;
        int sign=1;
        stack<int>st;
        int size=s.size();
        for(int i=0;i<size;++i){
            if(isdigit(s[i])){
                sum=s[i]-'0';
                while(i+1<size and isdigit(s[i+1])){
                    sum = sum*10 + (s[i+1] -'0');
                    i++;
                }
                ans+=sum*sign;
            }
            else if(s[i] == '+')
                sign=1;
            else if (s[i] == '-')
                sign=-1;
            else if (s[i] == '('){
                st.push(ans);
                st.push(sign);
                ans=0;
                sign=1;
            }
            else if(s[i] == ')')
            {
                int xsign=st.top();
                st.pop();
                int xans= st.top();
                st.pop();
                ans*=xsign;
                ans+= xans;
            }
        }
        return ans;
    }
};