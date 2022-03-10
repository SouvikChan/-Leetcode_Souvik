class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int cnt=0;
        for(int j=31;j>=0;j--){
            int one=0,zero=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i] & (1<<j)){
                    one++;
                }else{
                    zero++;
                }
            }
            if(one!=0 && zero!=0){
                cnt+=(one*zero);
            }
        }
        return cnt;
    }
};