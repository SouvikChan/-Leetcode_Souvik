class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int> candle;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='|') candle.push_back(i);
        }
        vector<int> ans;
        for(auto &x: queries){
            int low=lower_bound(candle.begin(),candle.end(),x[0])-candle.begin();
            int high=lower_bound(candle.begin(),candle.end(),x[1])-candle.begin();
            if(low>=high) ans.push_back(0);
            else{
                if(high==n || candle[high]!=x[1]) 
                    high--;
                ans.push_back(candle[high]-candle[low]-(high-low));
            }
        }
        return ans;
    }
};