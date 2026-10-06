class Solution {
   public:
    int bfs(vector<vector<int>>& grid, vector<vector<int>>& visited, int row, int col) {
        int area=1;
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        queue<pair<int, int>> q;
        q.push({row, col});
        visited[row][col] = 1;
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];
                if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() &&
                    visited[nr][nc] == -1 && grid[nr][nc] == 1) {
                    q.push({nr, nc});
                    visited[nr][nc] = 1;
                    area++;
                }
            }
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, -1));
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j] == -1 && grid[i][j] == 1) {
                    int area = bfs(grid, visited, i, j);
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};
