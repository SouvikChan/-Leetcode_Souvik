class Solution {
public:
    
    vector<vector<string>> res;
    
    bool isValid(vector<string>&board,int row,int col){
        for(int i=0;i<col;++i) if(board[row][i]=='Q') return false;
        for(int i=row, j=col;i>=0 and j>=0; i--, j--) if(board[i][j]=='Q') return false;
        for(int i=row, j=col;j>=0 and i<board.size();i++,j--) if(board[i][j]=='Q') return false;
        return true;
    }
    
    void dfs(vector<string>&board,int col){
        if(col==board.size()){
            res.push_back(board);
            return;
        }
        for(int i=0;i<board.size();++i){
            if(isValid(board,i,col)){
                board[i][col]='Q';
                dfs(board,col+1);
                board[i][col]='.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
       if(n<=0) return {{}};
        vector<string>board(n,string(n,'.'));
        dfs(board,0);
        return res;
    }
};