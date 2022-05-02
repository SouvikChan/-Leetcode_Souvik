class Solution {
public:
    
    static bool comp(int i, int j){
        return (i%2)<(j%2);
    }
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        return nums;
    }
};