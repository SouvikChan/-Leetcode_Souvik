class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int cnt=count(nums.begin(),nums.end(),target);
            if(cnt>0) ans++; 
        }
        if(ans>0) return true;
        else return false;
    }
};