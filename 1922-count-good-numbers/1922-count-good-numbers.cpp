

class Solution {
public:
    
   long long modPow(long long x, long long y, int mod = 1000000007)
{
    if (y == 0)
        return 1;
    auto p = modPow(x, y / 2);
    return p * p % mod * (y % 2 ? x : 1) % mod;
}
int countGoodNumbers(long long n) {
    return modPow(20, n / 2) * (n % 2 ? 5 : 1) % 1000000007;
}   
};