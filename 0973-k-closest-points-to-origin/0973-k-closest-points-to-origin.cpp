class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         vector<pair<double, vector<int>>> vp;
    vector<vector<int>> ans;
    for (int i = 0; i < points.size(); i++)
    {

        double x = (points[i][0] - 0) * (points[i][0] - 0);
        double y = (points[i][1] - 0) * (points[i][1] - 0);
        double dis = sqrt((x + y));
        vp.push_back({dis, {points[i][0], points[i][1]}});
    }
    // debug(vp);
    sort(vp.begin(), vp.end());

    for (int i = 0; i < k; i++)
        ans.push_back( vp[i].second);
    return ans;
    }
};