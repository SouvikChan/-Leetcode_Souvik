class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int i = 0;
      int cnt = 0;
      int ans=0;
      for(int j=0;j<nums.size();j++)
      {
          if(nums[j]==0)
              cnt++;
          while(cnt > k)
          {
              if(nums[i]==0)
              {
                  cnt--;
              }
              i++;
          }
          ans = max(ans,j-i+1);
      }
        return ans;
    }
};