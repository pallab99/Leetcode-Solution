class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;
        int res=INT_MIN;
        for(auto it:points)
        {
            while(!pq.empty() and it[0]-pq.top().second>k)
                pq.pop();
            if(!pq.empty())
            {
                int equation= it[0]+it[1]+pq.top().first;
                res=max(res,equation);
            }
            pq.push({it[1]-it[0],it[0]});
        }
        return res;
    }
};