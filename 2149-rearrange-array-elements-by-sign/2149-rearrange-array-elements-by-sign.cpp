class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int k=0, i=0, j=1;
        vector<int> ans(nums.size());
        while(k<nums.size()){
            if(nums[k]>0){
                ans[i]=nums[k];
                i+=2;
            }
            else{
                ans[j]=nums[k];
                j+=2;
            }
            k++;
        }
        return ans;
    }
};