class Solution {
public:
    
    int squre(int i){
        if(i==0)
            return 0;
        return i*i;
    }
    
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int j=squre(nums[i]);
            v.push_back(j);
        }
        sort(v.begin(),v.end());
        return v;
    }
};