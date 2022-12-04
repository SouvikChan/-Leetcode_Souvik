class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        if(n==1)    
            return 0;
        long long pre[n];
        pre[0]=nums[0];
        for(int i=1;i<n;i++)
            pre[i]=pre[i-1]+nums[i];
        long long res=INT_MAX;
        int ind=0;
        for(int i=1;i<n;i++) {
            int k=(abs(pre[i-1]/i-(pre[n-1]-pre[i-1])/(n-i)));
            if(res>k){
                res=k;
                ind=i-1;
            }
        }
        if(res>abs(pre[n-1]/n)){
            res=abs(pre[n-1]/n);
            ind=n-1;
        }
        return ind;
    }
};