class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=0;i<=sqrt(c);i++){
            if(ceil((double)sqrt(c-i*i)) == floor((double)sqrt(c-i*i))){
                return true;
            }
        }
        return false;
    }
};