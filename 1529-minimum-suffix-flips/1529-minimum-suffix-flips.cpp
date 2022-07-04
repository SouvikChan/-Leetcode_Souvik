class Solution {
public:
    int minFlips(string target) {
        int cnt=0;
        int cur='1';
        for(auto c:target){
            if(c==cur){
                cnt++;
                cur=(char)(48+(cur+1)%2);
            }
        }
        return cnt;
    }
};