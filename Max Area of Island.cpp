class Solution {
public:
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    int mx=0;
    int ans=0;
    void dfs(vector<vector<int>>& grid,int n,int m,int r,int c)
    {
        if(grid[r][c])
            mx++;
        grid[r][c]=0;
        for(int i=0;i<4;i++)
        {
            int nr=r+dx[i];
            int nc=c+dy[i];
            if(nr<0 || nr>=n || nc<0 || nc>=m || grid[nr][nc]==0)
                continue;
            
            dfs(grid,n,m,nr,nc);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    mx=0;
                    dfs(grid,n,m,i,j);
                    ans=max(ans,mx);
                }
            }
            
        }
        
        return ans;
    }
};
