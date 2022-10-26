class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int prefSum=0;
        for(int i=0;i<nums.size();++i){
            prefSum+=nums[i];
            prefSum%=k;
            if(prefSum==0 && i) return true;
            if(mp.find(prefSum)!=mp.end()){
                if(i-mp[prefSum]>1) return true;
            }
            else mp[prefSum]=i;
        }
        return false;
    }
};