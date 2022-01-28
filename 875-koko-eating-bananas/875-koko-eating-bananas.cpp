class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int low=1, high=100000000000, mid=0;
        while(low<=high){
            mid=low+(high-low)/2;
            int h=0;
            for(int i=0;i<piles.size();++i){
                h+=ceil(1.0*piles[i]/mid);
            }
            if(h>H) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};