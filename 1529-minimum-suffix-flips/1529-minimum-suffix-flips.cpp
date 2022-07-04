class Solution {
public:
    int minFlips(string target) {
        int cnt=0;
        char cur='0';
        for(auto c:target){
            if(c!=cur){
                cur=c;
                cnt++;
            }
        }
        return cnt;
    }
};