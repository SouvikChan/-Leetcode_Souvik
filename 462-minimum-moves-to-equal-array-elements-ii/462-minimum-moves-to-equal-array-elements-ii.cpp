class Solution {
public:
    int minMoves2(vector<int>& nums) {
//         brute force
        // unordered_map<int,int>mp;
        // for(auto it: nums) mp[it]++;
        // int freq=0;
        // for(auto x: mp){
        //     if(x.second>freq) freq=x.second;
        // }
        // return (nums.size()-freq);
        
        
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        int mid=nums[n/2];
        for(auto it: nums){
            ans+=abs(it-mid);
        }
        return ans;
        
    }
};