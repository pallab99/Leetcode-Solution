class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         priority_queue<pair<double, vector<int>>> pq;
    vector<vector<int>> ans;
    for (int i = 0; i < points.size(); i++)
    {
        double x = points[i][0] * points[i][0];
        double y = points[i][1] * points[i][1];
        double dis = sqrt((x + y));
        pq.push({-dis, {points[i][0], points[i][1]}});
    }

    while (k--)
    {
        vector<int> res = pq.top().second;
        pq.pop();
        ans.push_back(res);
    }
    return ans;
    }
};