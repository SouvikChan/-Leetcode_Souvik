class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>  v, temp=nums;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i = 0 ; i < k ; i++) 
            mp[nums[nums.size() - 1- i]]++; 
        for(auto it: temp) 
            if(mp[it]--> 0)
                v.push_back(it);
        return v;
    }
};