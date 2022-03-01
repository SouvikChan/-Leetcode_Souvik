class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> ans(n+1,0);
        if(n==0){
            return ans;
        }
        ans.at(0)=0;
        ans.at(1)=1;
        
        for(int i=2;i<=n;i++){
            int rem=i%2;
            int quot=i/2;
            int bits=ans.at(quot)+rem;
            ans.at(i) = bits;
        }
        return ans;
    }
};