class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int n = s1.size(), m = s2.size();
    sort(s1.begin(), s1.end());
    for (int i = 0; i <= m - n; i++)
    {
        string tmp = s2.substr(i,n);
        //debug(tmp);
        sort(tmp.begin(), tmp.end());
        if (tmp == s1)
            return true;
    }

    return false;
    }
};