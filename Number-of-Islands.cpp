class Solution {
    private:
    void bfs(int row, int col, vector<vector<int>> &visited, vector<vector<char>> &grid){
        int n = grid.size();
        int m = grid[0].size();

        visited[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            //traverse the neighbours
            int directions[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
                for(int i = 0; i < 4; ++i) {
                    int nrow = row + directions[i][0];
                    int ncol = col + directions[i][1];
                    if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !visited[nrow][ncol]) {
                    visited[nrow][ncol] = 1;
                    q.push({nrow,ncol});
    }
}

        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int count = 0;
        for(int row = 0; row < n; ++row){
            for(int col = 0; col < m; ++col){
                if(!visited[row][col] && grid[row][col] == '1'){
                    ++count;
                    bfs(row, col, visited, grid);
                }
            }
        }
        return count;
    }
};