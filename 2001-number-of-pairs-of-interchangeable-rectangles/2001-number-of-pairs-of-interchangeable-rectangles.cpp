class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
       map<double, double> mp;
    long long ans = 0LL;
    for (auto it : rectangles)
    {
         double x = (double)it[0] / (double)it[1];
        // debug(x);
        if(mp.find(x)!=mp.end())
        ans+=mp[x];

        mp[x]++;
    }
    
    return ans;
    }
};