class Solution {
public:
    const int mod=1337;
    int binpow(int a, int b)
    {
        int res=1;
        while(b)
        {
            if(b&1) res=(res*a)%mod;
            a=((a%mod)*(a%mod))%mod;
            b>>=1;
        }
        return res;
    }
    
    int superPow(int a, vector<int>& b) {
        if(b.size()==0) return 1;
        int digit=b.back();
        b.pop_back();
        return (binpow(superPow(a,b),10)%mod)*binpow(a,digit)%mod;
    }
};