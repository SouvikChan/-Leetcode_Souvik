class Solution {
public:
    vector<vector<int>> v;
        void solve(vector<int> &nums,int left,int right){
            if (left==right){
                v.push_back(nums);
                return;
            }
            else{
                for(int i=left;i<=right;i++){
                    swap(nums[left],nums[i]);
                    solve(nums,left+1,right);
                        swap(nums[left],nums[i]);
                }
            }
            
        }
       
        
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums,0,nums.size()-1);
        return v;
    }
};