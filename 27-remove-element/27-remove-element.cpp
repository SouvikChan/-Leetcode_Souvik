class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==val){
                cnt++;
                nums[i]=51;
            }
        }
        sort(nums.begin(), nums.end());
        nums.erase(nums.end()-cnt, nums.end()); 
        return nums.size();
    }
};