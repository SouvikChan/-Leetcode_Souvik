class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans, mx;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) ans.push_back(nums[i]);
            else if(nums[i]>pivot) mx.push_back(nums[i]);
            else cnt++;
        }
        while(cnt--){
            ans.push_back(pivot);
        }
        for(int i=0;i<mx.size();i++){
            ans.push_back(mx[i]);
        }
        return ans;
    }
};