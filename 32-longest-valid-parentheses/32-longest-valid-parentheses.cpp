class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size(),ans=0;
        stack<int> st={};
        for(int i=0;i<n;i++){
            if(s[i]!=')') st.push(i);
            else{
                if(st.empty()){
                    st.push(i);
                    continue;
                }
                if(s[st.top()]=='(' and s[i]==')'){
                    st.pop();
                    if(!st.empty()){
                        ans=max(ans,i-st.top());
                    }
                    else{
                        ans=max(ans,i+1);
                    }
                }
                else st.push(i);
            }
        }
        return ans;
    }
};