class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n=nums.size();
        set<int> st;
        for(int i=0;i<n;i++){
            auto upper =st.upper_bound(nums[i]);
            if(upper!=st.end() and abs((long)nums[i]-*(upper))<=t) return true;
            auto lower=st.lower_bound(nums[i]);
            if(lower!=st.end() and nums[i]==*(lower)) return true;
            if(lower!=st.begin() and abs((long)nums[i]-*(--lower))<=t) return true;
            if(i-k>=0) st.erase(nums[i-k]);
            if(k>=1) st.insert(nums[i]);
            
        }
        return false;
    }
};