class Solution
{
public:
  const int BLACK = 1;
  const int RED = 2;
  const int WHITE = 0;
  int color[109];

  bool isBipartite(vector<vector<int>> &g)
  {

    bool flag = 0;
    int n = g.size();
    for (int i = 0; i < n; i++)
      if (color[i] == 0)
      {
        queue<int> q;
        q.push(i);
        color[i] = BLACK;
        while (!q.empty())
        {
          int u = q.front();
          q.pop();
          for (auto v : g[u])
          {
            if (color[u] == color[v])
              return 0;
            else if (color[v] == 0)
            {
              q.push(v);
              if (color[u] == 1)
                color[v] = 2;
              else
                color[v] = 1;
            }
          }
        }
      }
    return 1;
  }
};