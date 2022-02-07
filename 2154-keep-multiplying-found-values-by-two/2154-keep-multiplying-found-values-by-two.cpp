class Solution {
public:
    int findFinalValue(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target){
                nums[i]*=2;target=target*2;
            }
            
        }
        return target;
    }
};