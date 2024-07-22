class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int >freq;
        int n=nums.size();
        for(int i=0;i<n;++i){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second==1) 
                return it.first;
        }
        return -1;
    }
};