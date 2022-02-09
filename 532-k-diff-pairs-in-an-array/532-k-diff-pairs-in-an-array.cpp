class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(auto it=nums.begin();it!=nums.end();it++){         
            if(it!=nums.begin() && *it==*(it-1)) continue; 
            auto itr=lower_bound(it+1,nums.end(),k+(*it));
            if(itr==nums.end()) 
                continue;
            if(*itr-*it==k){
                ans++;
            }
        }
         return ans; 
    }
};