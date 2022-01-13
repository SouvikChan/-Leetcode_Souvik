class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int r=rowIndex+1;
        vector<vector<int>> t(r);
        for(int i=0;i<r;i++){
            t[i].resize(i+1);
            t[i][0]=t[i][i]=1;
            for(int j=1;j<i;j++){
                t[i][j]=t[i-1][j-1]+t[i-1][j];
            }
        }
        return t[rowIndex];
    }
};