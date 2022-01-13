class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n);
        ans[0].push_back({1});
        for(int i=1;i<n;i++){
            for(int j=0;j<i+1;j++){
                if(j-1<0)
                    ans[i].push_back(ans[i-1][j]);
                else if(j==i)
                    ans[i].push_back(ans[i-1][j-1]);
                else 
                    ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
        }
        return ans;
    }
};