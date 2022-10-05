class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res = 0;
    int i = 0, j = 0;
    int n = neededTime.size();
    while (i < n and j < n)
    {
        int curtotal = 0, curmax = 0;
        while (j < n and colors[i] == colors[j])
        {
            curtotal += neededTime[j];
            curmax = max(curmax, neededTime[j]);
            j++;
        }
        res += abs(curmax - curtotal);
        i = j;
    }
    return res;
    }
};