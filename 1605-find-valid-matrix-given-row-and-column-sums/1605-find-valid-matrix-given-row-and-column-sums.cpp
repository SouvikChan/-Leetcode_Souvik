class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m = rowSum.size();
        int n = colSum.size();
        vector<vector<int>> v(m,vector<int>(n,0));
        int i = 0;
        int j = 0;
        while(i < m && j < n)
        {
            if(rowSum[i] < colSum[j])
            {
                v[i][j] = rowSum[i];
                colSum[j] = colSum[j] - rowSum[i];
                i++;
            }else
            {
                v[i][j] = colSum[j];
                rowSum[i] = rowSum[i] - colSum[j];
                j++;
            }
        }
        return v;
    }
};