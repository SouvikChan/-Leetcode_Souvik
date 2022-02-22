class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size();
        while(low < high){
            int mid = low + (high-low)/2;
            if(mid - 1 >= 0 && nums[mid - 1] < nums[mid] && mid + 1 < nums.size() && nums[mid + 1] < nums[mid]){
                return mid;
            }
            if(mid + 1 < nums.size() && nums[mid + 1] > nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return high;
    }
};