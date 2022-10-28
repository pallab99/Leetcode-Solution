class Solution {
public:
    
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
bool valid(vector<vector<char>> &grid, int i, int j, int m, int n)
{
    if (i < 0 or i >= m or j < 0 or j >= n or grid[i][j] == '0')
        return false;
    return true;
}
void dfs(vector<vector<char>> &grid, int i, int j, int m, int n)
{

    grid[i][j] = '0';
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (valid(grid, x, y, m, n))
            dfs(grid, x, y, m, n);
    }
}
int numIslands(vector<vector<char>> &grid)
{
    int cnt = 0;
    int m = grid.size();
    int n = grid[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '1')
            {
                dfs(grid, i, j, m, n);
                cnt++;
            }
        }
    }

    return cnt;
}
};