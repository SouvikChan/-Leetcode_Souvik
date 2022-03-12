class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=(double)sum/k;
        int i=0, j=k;
        while(j<nums.size()){
            sum -= nums[i];
            sum += nums[j];
            double a = (double)sum/k;
            avg = max(avg,a);
            i++;
            j++;
        }
        return avg;
    }
};