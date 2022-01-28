class Solution {
public:
     void singleDay(vector<int> &cells, int n){
        vector<int> temp(8,0);
        while(n--){
            for(int i=1;i<7;i++)
                temp[i] = (cells[i-1]==cells[i+1]) ? 1: 0;  
            for(int i=0;i<7;i++)
                cout<<temp[i];
            cout<<endl;
            cells = temp;
        }
    }
    vector<int> prisonAfterNDays(vector<int>& cells, int N){
        if(N==0) return cells;
        if(N%14==0) N=14;
        else N%=14;
        singleDay(cells,N);
        return cells;
    }
};