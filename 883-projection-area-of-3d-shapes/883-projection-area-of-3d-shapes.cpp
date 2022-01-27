class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int res = 0;
        for (int i = 0; i < grid.size(); ++i) {
            int r = 0, c = 0;
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j])
                    ++res;

                r = max(r,grid[i][j]);
                c = max(c,grid[j][i]);
            }

            res += r + c;
        }
        return res;
    }
};