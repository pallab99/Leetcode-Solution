class Solution {
public:
    long long To_int(string str)
{
    stringstream ss(str);
    long long x = 0;
    ss >> x;
    return x;
}
    long long smallestNumber(long long num) {
        if (num > 0)
    {
        string s = to_string(num);
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        char ch;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                ch = s[i];
                s.erase(i, 1);
                break;
            }
        }
        s.push_back(ch);
        reverse(s.begin(), s.end());
        // debug(s);
        return (To_int(s));
    }
    else
    {
        string s = to_string(num);
        s.erase(0, 1);
        // debug(s);
        sort(s.begin(), s.end());
        // debug(s);
        reverse(s.begin(), s.end());
        long long x = To_int(s);
        return x * -1;
    }
    }
};