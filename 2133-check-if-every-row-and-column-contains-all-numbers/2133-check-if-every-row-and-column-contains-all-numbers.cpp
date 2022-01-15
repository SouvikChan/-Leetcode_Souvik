class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n =matrix.size();
        for(int i=0;i<n;i++){
            set<int> strow;
            set<int> stcol;
            for(int j=0;j<n;j++){
                stcol.insert(matrix[j][i]);
                strow.insert(matrix[i][j]);
            }
            if(stcol.size()!=n || strow.size()!=n)
                return false;
        }
        return true;
    }
};