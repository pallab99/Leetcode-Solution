class Solution {
public:
    int minSwaps(string s) {
        int bal = 0;
    int j = s.size();
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '[')
            bal++;
        else
            bal--;
        if (bal < 0)
        {
            while (i < j and s[j] != '[')
                j--;
            swap(s[i], s[j]);
            res++;
            bal = 1;
        }
    }

    return res;
    }
};