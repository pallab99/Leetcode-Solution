class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
    for (auto it : columnTitle)
    {
        int d = it - 'A' + 1;
        res = res * 26 + d;
    }
    return res;
    }
};