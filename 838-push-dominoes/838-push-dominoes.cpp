class Solution {
public: 
    string pushDominoes(string dominoes) {
        int n=dominoes.size();
        vector<int>l(n),r(n);
        int dist=INT_MAX;
        for(int i=0;i<n;++i){
            if(dominoes[i]=='R') dist=0;
            else if(dominoes[i]=='L')dist=INT_MAX;
            else if(dist!=INT_MAX and dominoes[i]=='.')dist++;
            r[i]=dist;
        }
        dist=INT_MAX;
        for(int i=n-1;i>=0;--i){
            if(dominoes[i]=='L')dist=0;
            else if(dominoes[i]=='R') dist=INT_MAX;
            else if(dist!=INT_MAX and dominoes[i]=='.')dist++;
            l[i]=dist;
        }
        for(int i=0;i<n;++i){
            if(l[i]==r[i]) continue;
            else if(l[i]>r[i]) dominoes[i]='R';
            else dominoes[i]='L';
        }
        return dominoes;
    }
};