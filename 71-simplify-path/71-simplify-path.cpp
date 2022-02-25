class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        string res, cnt;
        int n=path.size();
        stringstream it(path);
        while(getline(it, cnt, '/')){
            if(cnt=="" || cnt==".") 
                continue;
            if(cnt!="..")
                s.push(cnt);
            else if(!s.empty())
                s.pop();
        }
        if(s.empty()) 
            return "/";
        while(!s.empty()){
            res='/'+s.top()+res;
            s.pop();
        }
        return res;
    }
};