class Solution {
public:
    bool issubsequence(const string &pattern, const string &text)
{
    int n = 3;
    int m = text.size();
    int i = 0, j = 0;
    for (i = 0, j = 0; i < text.size() && j < 3; ++i)
    {
        if (text[i] == pattern[j])
            ++j;
    }
    return j == 3;
}
    int countPalindromicSubsequence(string s) {
        int ans = 0;
    for (char a = 'a'; a <= 'z'; a++)
    {
        for (char b = 'a'; b <= 'z'; b++)
        {
            string str;
            str.push_back(a);
            str.push_back(b);
            str.push_back(a);
            ans += issubsequence(str, s);
        }
    }

    return ans;
    }
};