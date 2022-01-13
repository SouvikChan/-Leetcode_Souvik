class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0;
        int n=prices.size();
        int c=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]>c)
                m=max(m,prices[i]-c);
            else
                c=prices[i];
        }
        return m;
    }
};