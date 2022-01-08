class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        int cp=n;
        int i=0;
        while(cp!=0){
            cp>>=1;
            n^=(1<<i);
            i++;
        }
        return n;
    }
};