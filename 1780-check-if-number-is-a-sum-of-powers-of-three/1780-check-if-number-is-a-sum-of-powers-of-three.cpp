class Solution {
public:
    bool checkPowersOfThree(int n, int r=0) {
        if(r==2)
            return false;
        if(n==0)
            return true;
        return checkPowersOfThree(n/3, n%3);
    }
};