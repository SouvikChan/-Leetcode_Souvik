class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        stack<string> st;
        for(int i=0;i<n;i++){
            string t;
            if(s[i]!=' ')
            {
                while(i<n && s[i]!=' '){
                    t+=s[i];
                    i++;
                }
            st.push(t);
            }
        }
        string res;
        res+=st.top();
        st.pop();
        while(!st.empty()){
            res+=" "+st.top();
            st.pop();
        }
        return res;
    }
};