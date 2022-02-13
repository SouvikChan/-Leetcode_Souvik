class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, vector<pair<int,int>>> od;
        set st = {0, 1, 2};
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                if (board[i][j] == '.') continue;
                if (!od[board[i][j]].empty()) {
                    for (auto const &grid: od[board[i][j]]){
                        auto [x, y] = grid;
                        auto [x1, y1] = (pair<double,double>){ceil(x / 3), ceil(y / 3)};
                        auto [i1, j1] = (pair<double,double>){ceil(i / 3), ceil(j / 3)};
                        if (x == i || y == j || (x1 == i1 && y1 == j1)) {
                            return false;
                        }
                    }
                }
                od[board[i][j]].push_back({i, j});
            }
        }
        return true;
    }
};