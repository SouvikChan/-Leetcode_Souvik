class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>& rem) {
        int l=0, r=rem.size();
        vector<int> map(s.size(), INT_MAX);
        for(int i=0;i<r;++i) map[rem[i]]=i;
        while(l<r){
            int m=(l+r+1)/2;
            int j=0;
            for(int i=0;i<s.size() and j<p.size();++i)
                if(map[i]>=m and s[i]==p[j]) ++j;
            if(j==p.size()) l=m;
            else r=m-1;
        }
        return l;
    }
};