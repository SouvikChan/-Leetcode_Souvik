class Solution {
public:
    
    bool solve(string s,string word){
        int i=0, j=0;
        if(word.length()>s.length()) return false;
        while(i<s.length() && j<word.length()){
            if(s[i]!=word[j]) return false;
            i++, j++;
            int c1=1, c2=1;
            while(i<s.length() && s[i]==s[i-1]) 
                c1++, i++;
            while(j<word.length() && word[j]==word[j-1])
                c2++, j++;
            if(c2>c1) return false;
            if(c1<3)
                if(c1!=c2) return false;
        }
        if(i==s.length() && j==word.length()) return true;
        return false;
    }
    
    int expressiveWords(string s, vector<string>& words) {
        int ans=0;
        for(auto word:words) ans=solve(s,word)?ans+1:ans;
        return ans;
    }
};