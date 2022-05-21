class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans=0, n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i = n-1; i >= 0; i--){
            int l=0, h=i-1;
            while(l<h){
                if(nums[l]+nums[h]>nums[i]){
                    ans+=abs(h-l);
                    h--;
                }
                else l++;
            }
        }
        return ans;
    }
};