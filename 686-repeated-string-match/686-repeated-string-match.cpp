class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int ans=1;
        string tmp=a;
        int m = b.size()/a.size()+1+1;
        while(m--){
            if(tmp.find(b) != string::npos) return ans;
            tmp.append(a);
            ans++;
        }
        return -1;
    }
};