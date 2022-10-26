class Solution {
public:
    int numberOfSubstrings(string s) {
        int x = -1;
    int y = -1;
    int z = -1;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            x = i;
        else if (s[i] == 'b')
            y = i;
        else
            z = i;
        ans += min({x, y, z}) + 1;
    }
    return ans;
    }
};