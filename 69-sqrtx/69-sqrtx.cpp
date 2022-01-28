class Solution {
public:
    int mySqrt(int x) {
        long long res = 0;
        for(long long i = 1; i <= x; i++){
             long long val = i*i;
            if(val == x){
                res = i;
                break;
            }
            else if(val > x){
                res = i-1;
                break;
            }
        }
        return res;
    }
};