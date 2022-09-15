class Solution {
public:
    int minReorder(int n, vector<vector<int>>& con) {
        vector<int>g[50001];
        set<pair<int,int>>st;
        vector<bool>visit(50001,false);
        for(int i=0;i<con.size();i++)
        {
            g[con[i][0]].push_back(con[i][1]);
            g[con[i][1]].push_back(con[i][0]);
            st.insert({con[i][0],con[i][1]});
        }
        queue<int>q;
        q.push(0);
        int cnt=0;
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            if(!visit[cur])
            {
                visit[cur]=true;
                for(auto it:g[cur])
                {
                    q.push(it);
                    if(!visit[it] and st.count({cur,it}))
                        cnt++;
                }
            }
        }
        return cnt;
    }
};