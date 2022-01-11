class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        int boi=n;
        int i=0;
        while(boi!=0){
            boi>>=1;
            n^=(1<<i);
            i++;
        }
        return n;
    }
};