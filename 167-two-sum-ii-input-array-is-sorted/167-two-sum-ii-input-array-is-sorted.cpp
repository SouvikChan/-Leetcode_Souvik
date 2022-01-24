class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int low=i;
            int high=nums.size()-1;
            while(low<high){
                int val=nums[low]+nums[high];
                if(val==target){
                    ans.push_back(low+1);
                    ans.push_back(high+1);
                    return ans;
                }
                else if(val < target){
                    low++;
                }
                else{
                    high--;
                }
            }
        }
        return ans;
    }
};