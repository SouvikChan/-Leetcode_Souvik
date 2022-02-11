class Solution {
public:
    int arrangeCoins(int n) {
        int cnt=0;
        if(n==0){
            return 0;
        }
        int i=1;
        while(n-i>=0){
            cnt++;
            n-=i;
            i++;
        }
        return cnt;
    }
};