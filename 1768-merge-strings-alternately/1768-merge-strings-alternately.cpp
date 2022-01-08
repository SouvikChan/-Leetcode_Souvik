class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3;
        int p=word1.size();
        int q=word2.size();
        int n=max(p,q);
        for(int i=0;i<n;i++){
            if(p!=0){
                word3=word3+word1[i];
                p--;
            }
            if(q!=0){
                word3=word3+word2[i];
                q--;
            }
        }
        return word3;
    }
};