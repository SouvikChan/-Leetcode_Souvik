class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int target=0;
        map<int,int>mp;
        for(auto i:nums){
            if(mp.find(i)==mp.end()) mp[i]=1;
            else mp[i]++;
        }
        for(auto i:mp){
            if(i.second==1) target= i.first;
        }
        return target;
    }
};