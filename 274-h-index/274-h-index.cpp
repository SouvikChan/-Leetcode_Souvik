class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int ans=0;
        for(int i=1;i<=citations.size();i++){
            auto it=lower_bound(citations.begin(),citations.end(),i)-citations.begin();
            if(citations.size()-it>=i)
                ans=i;
        }
        return ans;
    }
};