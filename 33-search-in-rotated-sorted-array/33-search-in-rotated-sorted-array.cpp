class Solution {
public:
      int binary_left(vector<int>& nums, int pivot,int target){
        int lo = 0;
        int hi = pivot-1;
        while(lo<=hi){
            int mid  = lo+(hi-lo)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                hi = mid-1;
            }
            else lo = mid+1;
        }
        return -1;
    }
    
    int binary_right(vector<int>& nums, int pivot, int target){
        int lo = pivot;
        int hi = nums.size()-1;
        while(lo<=hi){
            int mid  = lo+(hi-lo)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                hi = mid-1;
            }
            else lo = mid+1;
        }
        return -1;
    }
    int find_pivot(vector<int>& nums,int x){
        int lo = 0;
        int hi = nums.size()-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==x){
                return mid;
            }
            else if(nums[mid]>nums[hi]){
                lo = mid+1;
            }
            else hi = mid-1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int x = *min_element(nums.begin(),nums.end());
        int p = find_pivot(nums,x);
        int left_search = binary_left(nums,p,target);
        int right_search = binary_right(nums,p,target);
        if(left_search!=-1) return left_search;
        else if(right_search!=-1) return right_search;
        else return -1;
    }
};