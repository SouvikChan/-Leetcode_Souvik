class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int n1=nums2.size();
        vector<int> nums3(n+n1);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
        int n2=nums3.size();
        int mid=n2/2;
        if(n2&1) return nums3[mid];
        else return (nums3[mid]+nums3[mid-1])/2.0;
       
    }
};