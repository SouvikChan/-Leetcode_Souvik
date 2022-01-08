class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int cnt=0;
        int occuren[60] ={0};
        for(auto t : time)
        {
            const int sixdom =t%60;
            const int ned = (60 - sixdom)%60;
            cnt +=occuren[ned];
            occuren[sixdom]++;
        }
        return cnt;
    }
};