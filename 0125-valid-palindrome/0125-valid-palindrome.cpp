class Solution {
public:
    bool isPalindrome(string s) {
       int n = s.size();
    if (n == 1)
        return true;
    string ss;
    for (int i = 0; i < n; i++)
    {
        if (isalnum(s[i]))
            ss.push_back(s[i]);
    }
    transform(ss.begin(), ss.end(), ss.begin(), ::toupper);
    int i = 0;
    int j = ss.size() - 1;
    while (i < j)
    {
        if (ss[i] != ss[j])
            return false;
        i++;
        j--;
    }
    return true;
    }
};