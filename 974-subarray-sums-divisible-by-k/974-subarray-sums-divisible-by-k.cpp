class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt=0, cur=0;
        unordered_map<int,int> mp={{0,1}};
        for(int i=0;i<nums.size();i++){
            cur=(cur+nums[i]%k+k)%k;
            cnt+=mp[cur];
            mp[cur]++;
        }
        return cnt;
    }
};