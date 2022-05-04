class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=0;
        int i=0, j=n-1;
        while(i<j){
            if((nums[i]+nums[j])==k){
                cnt++;i++,j--;
            }
            else if((nums[i]+nums[j])>k) j--;
            else i++;
        }
        return cnt;
    }
};