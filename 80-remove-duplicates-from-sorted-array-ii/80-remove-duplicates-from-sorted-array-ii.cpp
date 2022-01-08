class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int c = 1, curr = 1;
        for(int i=1; i<n ; i++){
            if(nums[curr-1] == nums[i] && c<2){
                nums[curr] = nums[i];
                curr++;
                c++;
            }
            else if(nums[curr-1] == nums[i]){
                c++;
            }
            else{
                c=1;
                nums[curr] = nums[i];
                curr++;
            }
        }
        return curr;
    }
};