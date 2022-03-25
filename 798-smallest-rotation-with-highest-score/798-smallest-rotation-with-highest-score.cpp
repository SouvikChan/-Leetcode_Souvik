class Solution {
public:
    int bestRotation(vector<int>& nums) {
        int n=nums.size();
        vector<int> diff(n,1);
        for(int i=0;i<n;++i){
            diff[(i+n-nums[i]+1)%n]--;
        }
        int ans=0, prefix=0, maxi=INT_MIN;
        for(int i=0;i<n;i++){
            prefix+=diff[i];
            if(prefix>maxi){
                maxi=prefix;
                ans=i;
            }
        }
        return ans;
    }
};