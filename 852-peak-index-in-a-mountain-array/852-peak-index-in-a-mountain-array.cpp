class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        auto lower=max_element(arr.begin(),arr.end())-arr.begin();
        return lower;
    }
};