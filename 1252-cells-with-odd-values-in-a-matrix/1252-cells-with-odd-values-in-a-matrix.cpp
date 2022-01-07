class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> row(n, 0);
        vector<int> col(m, 0);
        for(auto x: indices){
            row[x[0]] ^=1;
            col[x[1]] ^=1;
        }
        int r=0;
        int c=0;
        for(auto x: indices){
            if(row[x[0]]){
                r++;
                row[x[0]]=0;            
            }
            if(col[x[1]]){
                c++;
                col[x[1]]=0;
            }
        }
        return r*m +c*n-2*r*c;
    }
};