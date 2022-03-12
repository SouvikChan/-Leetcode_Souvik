class Solution {
public:
    string reverseWords(string s) {
        // reverse(s.begin(),s.end());
        // return s;
        string str;
        vector<string> vec;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ')
                str+=s[i];
            else{
                if(str.size()>0) vec.push_back(str);
                str="";
            }
        }
        if(str.size()>0) vec.push_back(str);
        string ans="";
        for(int i=vec.size()-1; i>=0; i--) 
            ans += vec[i] + ' ';
        ans.erase(ans.size()-1, 1);
        return ans;
    }
};