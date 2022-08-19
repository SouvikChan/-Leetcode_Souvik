class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it: nums)mp[it]++;
        for(auto i:nums){
            if(mp[i]==0) continue;
            int freq=mp[i], curr=i, cnt=0;
            while(mp.count(curr) && mp[curr]>=freq){
                freq=max(freq,mp[curr]);
                mp[curr]--;
                cnt++;
                curr++;
            } 
            if(cnt<3) return false;
        }
        return true;
    }
};