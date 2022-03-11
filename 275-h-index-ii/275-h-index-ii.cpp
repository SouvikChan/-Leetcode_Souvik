class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int l=0, h=citations[n-1];
        int Hidx=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            int idx=lower_bound(citations.begin(),citations.end(),mid)-citations.begin();
            if((n-idx)>=mid){
                Hidx=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return Hidx;
    }
};