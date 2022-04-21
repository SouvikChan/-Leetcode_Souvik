class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        reverse(nums2.begin(),nums2.end());
        int res=0;
        for(int i=0;i<nums1.size();++i){
            auto it=lower_bound(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            int j=nums2.size()-1-it;
            if(i<=j)
                res=max(res,j-i);
        }
        return res;
    }
};