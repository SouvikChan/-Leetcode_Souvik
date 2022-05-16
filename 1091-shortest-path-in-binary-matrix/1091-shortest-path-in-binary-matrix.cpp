class Solution {
    struct state { int x,y; };
public:
    int dist[100][100];
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
        int dy[8] = { 0, 1, 0, -1, -1, -1, 1, 1 };
        int N = grid.size();
        if(grid[0][0] == 1 || grid[N-1][N-1] == 1) return -1;
        queue<state> q;
        q.push({ 0, 0 });
        dist[0][0] = 1;
        while(!q.empty()) {
            state& s = q.front();
            if(s.x == N-1 && s.y == N-1) return dist[s.x][s.y];
            grid[s.x][s.y] = 1;
            for(int i = 0; i < 8; i++) {
                int x = s.x + dx[i];
                int y = s.y + dy[i];
                if(x < 0 || x >= N || y < 0 || y >= N || grid[x][y]) continue;
                if(dist[x][y] && dist[x][y] <= dist[s.x][s.y] + 1) continue;
                q.push({x,y});
                dist[x][y] = dist[s.x][s.y]+1;
            }
            q.pop();
        }
        return -1;
    }
};