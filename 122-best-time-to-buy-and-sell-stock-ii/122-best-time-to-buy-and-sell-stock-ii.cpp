class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int start=prices[0], end=prices[0];
        int cnt=0, sum=0;
        for(int i=1;i<prices.size();++i){
            if(end<=prices[i]){
                end=prices[i];
                cnt=max(cnt, end-start);
            }else {
                // cnt+=sum;
                sum+=cnt;
                cnt=0;
                start=end=prices[i];
            }
        }
        return sum+cnt;
    }
};