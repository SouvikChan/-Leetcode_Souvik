class Solution {
public:
    double pow(double x, int n) {
        if(n==0) return 1.0;
        double val=pow(x,n/2);
        if(n%2==0) return val*val;
        return x*val*val;
    }
    double myPow(double x,int n){
        if(n==1.0) return x;
        if(n<0) return 1/pow(x,abs(n));
        return pow(x,n);
    }
};