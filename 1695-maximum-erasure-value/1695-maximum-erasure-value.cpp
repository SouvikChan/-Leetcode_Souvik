class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        // cadane algo
        // int ms=INT_MIN; //Max so far
        // int mxEnd=0;     //Max ending here
        // int n=nums.size();
        // for(int i=0;i<n;++i){
        //     mxEnd+=nums[i];
        //     if(ms<mxEnd) ms=mxEnd;
        //     if(mxEnd<0) mxEnd=0;
        // }
        // return ms;
        
        int sum=0,curr=0;
        unordered_set<int> s;
        int i=0,j=0,n=nums.size();
        while(i<n&&j<n){
            if(s.find(nums[j])==s.end()){
                curr+=nums[j];
                s.insert(nums[j++]);
                sum=max(sum,curr);
            }
            else{
                curr-=nums[i];
                s.erase(nums[i++]);
            }
        }
        return sum;
    }
};