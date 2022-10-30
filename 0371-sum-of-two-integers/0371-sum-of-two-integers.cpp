class Solution {
public:
    int getSum(int a, int b) {
    if (a > 0 and b > 0)
    {
        while (a--)
            b++;
        return b;
    }

    else if (a < 0 and b < 0)
    {
        a = abs(a);
        b = abs(b);
        while (a--)
            b++;
        return -b;
    }
    else if (b < 0)
    {
        if (a == 0)
            return b;
        else
        {
            while (a--)
                b++;
            return b;
        }
    }
    else if (a < 0)
    {
        if (b == 0)
            return a;
        else
        {
            while (b--)
                a++;

            return a;
        }
    }
    else if (a == 0 and b > 0)
        return b;
    else if (b == 0 and a > 0)
        return a;
    return 0;
    }
};