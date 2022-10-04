class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        priority_queue<int, vector<int>, greater<int>> pq;
    int sum = 0;
    for (auto it : costs)
    {
        sum += it[0];
        pq.push(it[1] - it[0]);
    }
    int x = pq.size() / 2;
    while (x--)
    {
        sum += pq.top();
        pq.pop();
    }
    return sum;
    }
};