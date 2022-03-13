class Solution {
public:
    int mostFrequent(vector<int>& nums, long long key) {
        map<int, int> m;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key)
                m[nums[i+1]]++;
        }
        int ans=0, f=0;
        for(auto it:m){
            if(f<it.second){
                ans=it.first;
                f=it.second;
            }
        }
        return ans;
    }
};