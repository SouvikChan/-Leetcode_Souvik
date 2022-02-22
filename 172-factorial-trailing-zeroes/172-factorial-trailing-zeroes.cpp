class Solution {
public:
    int trailingZeroes(int n) {
        double sum=0;
        while(n>=5){
            n/=5;
            sum+=n;
        }
        return sum;
    }
};