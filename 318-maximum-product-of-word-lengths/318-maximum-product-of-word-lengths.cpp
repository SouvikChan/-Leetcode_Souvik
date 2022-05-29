class Solution {
public:
    
    bool checkCommon(bitset<26>& b1, bitset<26>& b2){
        for(int i=0;i<26;++i) if(b1[i] and b2[i]) return true;
        return false;
    }
    
    int maxProduct(vector<string>& words) {
        int n=words.size(); 
        int ans=0;
        vector<bitset<26>> chars(n);
        for(int i=0;i<n;++i){
            for(auto it: words[i]) chars[i][it-'a']=1;
            for(int j=0;j<i;j++){
               if(!checkCommon(chars[i], chars[j])) ans = max(ans, int(size(words[i]) * size(words[j])));
            }
        }
        return ans;
    }
};