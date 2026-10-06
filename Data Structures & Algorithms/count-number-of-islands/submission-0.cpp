class Solution {
   public:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& visited, int row, int col) {
        int dr[] = {1, -1, 0, 0}, dc[] = {0, 0, 1, -1};
        queue<pair<int, int>> q;
        visited[row][col] = 1;
        q.push({row, col});
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];
                if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() &&
                    visited[nr][nc] == -1 && grid[nr][nc] == '1') {
                    q.push({nr, nc});
                    visited[nr][nc] = 1;
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        vector<vector<int>> visited(grid.size(), vector<int>(grid[0].size(), -1));
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (visited[i][j] == -1 && grid[i][j] != '0') {
                    bfs(grid, visited, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};
