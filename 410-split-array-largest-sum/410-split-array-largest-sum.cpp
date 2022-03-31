class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        int l=0,r=0;
        for(int i=0;i<n;++i){
            l=max(l,nums[i]);
            r+=nums[i];
        }
        int mid=0,ans=0;
        while(l<=r){
            mid=l+(r-l)/2;
            int cnt=0, tsum=0;
            for(int i=0;i<n;++i){
                if(tsum+nums[i]<=mid)tsum+=nums[i];
                else {cnt++;
                      tsum=nums[i];
                     }
            }
            cnt++;
            if(cnt<=m) {r=mid-1;
                        ans=mid;
                       }
            else l=mid+1;
        }
        return ans;
    }
};