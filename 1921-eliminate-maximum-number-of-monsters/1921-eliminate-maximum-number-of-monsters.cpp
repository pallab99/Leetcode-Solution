class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int time = ceil((1.0 * dist[i]) / speed[i]);
        v.push_back(time);
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    int t = 0;
    for (auto it : v)
    {
        if (t < it)
            cnt++;
        else
            break;
        t++;
    }
    return cnt;
    }
};