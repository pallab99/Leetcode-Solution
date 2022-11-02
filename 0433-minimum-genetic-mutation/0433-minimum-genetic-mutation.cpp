class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
   map<string, int> mp;
    for (auto it : bank)
        mp[it] = 1;
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
            mp.erase(cur);

            for (int i = 0; i < 8; i++)
            {
                string tmp = cur;
                tmp[i] = 'A';
                if (mp.count(tmp))
                    q.push(tmp);
                tmp[i] = 'C';
                if (mp.count(tmp))
                    q.push(tmp);
                tmp[i] = 'G';
                if (mp.count(tmp))
                    q.push(tmp);
                tmp[i] = 'T';
                if (mp.count(tmp))
                    q.push(tmp);
            }
        }
        ans++;
    }
    return -1;
    }
};