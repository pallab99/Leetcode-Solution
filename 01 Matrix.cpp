class Solution {
public:
    bitset<10005>vis[10005];
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    struct node
    {
       int x;
       int y;
    };
    bool isvalid(int x, int y,int m,int n)
{
   return (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y]);
}
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        queue<node>q;
        vector<vector<int>> dis(m,vector<int>(n,-1));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    dis[i][j]=0;
                    vis[i][j]=1;
                }
            }
        }
        
        while(!q.empty())
        {
            int x=q.front().x;
            int y=q.front().y;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int next_x=x+dx[i];
                int next_y=y+dy[i];
                if(isvalid(next_x,next_y,m,n) and dis[next_x][next_y]==-1)
                {
                    q.push({next_x,next_y});
                    dis[next_x][next_y]=dis[x][y]+1;
                    vis[next_x][next_y]=1;
                }
                    
            }
        }
        
        return dis;
    }
};
