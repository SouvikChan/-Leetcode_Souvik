class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> s;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            int n=i;
            while(i!=nums.size()-1 and nums[i]+1==nums[i+1]){
                i++;
                cnt++;
            }
            if(cnt==0) s.push_back(to_string(nums[i]));
            else{
                string need=to_string(nums[n]);
                need+="->";
                need+=to_string(nums[i]);
                s.push_back(need);
            }
        }
        return s;
    }
};