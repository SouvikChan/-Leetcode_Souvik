class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    // auto it = find(nums.begin(), nums.end(), target);  
    // int index = it- nums.begin();
    // if(index==0) return 0;
    // else return index;
        
        long ret= INT_MAX;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++)
        {
            for (int j=i+1;j<nums.size();j++)
            {                
                int s= j+1;
                int e = nums.size()-1;
                int m =s+(e-s)/2;
                int ij = nums[i]+nums[j];
                while (s<=e)
                {
                    int t1 = ij+nums[m];
                    if (t1==target)
                        return target;                        
                    else if (t1>target)
                        e=m-1;
                    else
                        s=m+1;
                    if (abs(ret-target)>abs(t1-target))
                        ret = t1;
                    m =s+(e-s)/2;
                }
            }
        }
        return ret;
    }
};