class Solution {
public:
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
    struct node
    {
      int x;
      int y;
        int t;
    };
    
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty())
            return 0;
        int fresh_orange=0;
        int n=grid.size();
        int m=grid[0].size();
        queue<node>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j,0});
                }
            }
        }
        
        int time=0;
        
       
        while(!q.empty())
        {
            
            int ff=q.front().x;
            int fff=q.front().y;
            int tt=q.front().t;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int next_x=ff+dx[i];
                int next_y=fff+dy[i];
                if(next_x>=0 and next_x<n and next_y>=0 and next_y<m and grid[next_x][next_y]==1)
                {
                     grid[next_x][next_y]=2;
                    int t=tt+1;
                     time = max( time, t );
                    q.push({next_x,next_y,t});
                }
            }
            
           
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return time;
    }
};
