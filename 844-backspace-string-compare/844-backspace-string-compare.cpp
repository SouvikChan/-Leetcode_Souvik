class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st1, st2;
        string s1,s2;
        for(int i=0;i<s.size();++i){
            if(s[i]=='#' and !st1.empty()) st1.pop();
            else if(s[i]!='#')st1.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' and !st2.empty()) st2.pop();
            else if(t[i]!='#') st2.push(t[i]);
        }
        
        while(!st1.empty()){
            s1.push_back(st1.top());
            st1.pop();
        }
        while(!st2.empty()){
            s2.push_back(st2.top());
            st2.pop();
        }
        return s1==s2;
    }
};