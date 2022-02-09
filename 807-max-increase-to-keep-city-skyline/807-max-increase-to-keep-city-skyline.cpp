class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> r,c;
        for(int i=0;i<grid.size();i++)
        {
            int m1=0;
            int m2=0;
            for(int j=0;j<grid.size();j++)
            {
                m1=max(m1,grid[i][j]);
                m2=max(m2,grid[j][i]);
            }
            r.push_back(m1);
            c.push_back(m2);
        }
        int ans=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid.size();j++)
               ans+=min(r[i],c[j]) - grid[i][j];
        return ans;
    }
};