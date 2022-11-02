class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
            unordered_set<string> st(bank.begin(), bank.end());
    queue<string> q;
    q.push(start);
    int ans = 0;
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            string cur = q.front();
            q.pop();
            if (cur == end)
                return ans;
            st.erase(cur);


            for (int i = 0; i < 8; i++)
            {
                string tmp = cur;
                tmp[i] = 'A';
                if (st.count(tmp))
                    q.push(tmp);
                tmp[i] = 'C';
                if (st.count(tmp))
                    q.push(tmp);
                tmp[i] = 'G';
                if (st.count(tmp))
                    q.push(tmp);
                tmp[i] = 'T';
                if (st.count(tmp))
                    q.push(tmp);
            }
        }
        ans++;
    }
    return -1;
    }
};