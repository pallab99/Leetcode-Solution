class Solution {
public:
vector<int> ans;
bool valid(int rsize, int csize, int r, int c)
{
    if (rsize <= r || csize <= c || c < 0 || r < 0)
        return false;
    return true;
}
int dfs(vector<vector<int>> &grid, int r, int c)
{
    if (r == grid.size())
        return c;
    if (valid(grid.size(), grid[0].size(), r, c))
    {
        if (grid[r][c] == 1)
        {
            if (valid(grid.size(), grid[0].size(), r, c + 1) and grid[r][c + 1] == 1)
                return dfs(grid, r + 1, c + 1);
        }
        else
        {
            if (valid(grid.size(), grid[0].size(), r, c - 1) && grid[r][c - 1] == -1)
                return dfs(grid, r + 1, c - 1);
        }
    }
    return -1;
}
vector<int> findBall(vector<vector<int>> &grid)
{
    ans.resize(grid[0].size(), 0);
    for (int j = 0; j < grid[0].size(); j++)
    {
        ans[j] = dfs(grid, 0, j);
    }
    return ans;
}
};