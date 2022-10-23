class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=size(nums);
        sort(nums.begin(),nums.end());
        int dup=0;
        for(int i=0;i<n;++i){
            if(nums[i]==nums[i+1]){
                dup=nums[i];
                break;
            }            
        }
        int sum=(n+1)*n/2;
        for(int i=0;i<n;++i){
            sum-=nums[i];
        }
        return {dup,sum+dup};
    }
};