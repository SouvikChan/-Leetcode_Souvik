class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        arr=nums;
        ans.push_back(arr);
        next_permutation(arr.begin(),arr.end());
        while(arr!=nums){
            ans.push_back(arr);
            next_permutation(arr.begin(),arr.end());
        }
        return ans;
    }
};