class Solution {
public:
void toposort(int node, vector<int> &vis, vector<int> &topo, vector<int> adj[])
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
            toposort(it, vis, topo, adj);
    }
    topo.emplace_back(node);
}
bool iscycle(vector<int> adj[], vector<int> &vis, int id)
{
    if (vis[id] == 1)
        return true;
    if (vis[id] == 0)
    {
        vis[id] = 1;
        for (auto edge : adj[id])
        {
            if (iscycle(adj, vis, edge))
                return true;
        }
    }
    vis[id] = 2;
    return false;
}
vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
{
    int n = numCourses;
    vector<int> adj[n];
    for (auto edge : prerequisites)
        adj[edge[1]].push_back(edge[0]);

    vector<int> vis(2009, 0);
    vector<int> topo;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (iscycle(adj, vis, i))
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
        return topo;

    vector<int> vis1(2009, 0);

    for (int i = 0; i < n; i++)
    {
        if (!vis1[i])
            toposort(i, vis1, topo, adj);
    }

    reverse(topo.begin(), topo.end());
    return topo;
}
};