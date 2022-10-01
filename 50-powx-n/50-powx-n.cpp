class Solution {
public:
    double myPow(double x, int n) {
        if (n < 0)
    {
        x = 1 / x;
    }
    double val = 1.0;
    long num = labs(n);
    while (num != 0)
    {
        if ((num & 1) != 0)
            val *= x;
        x *= x;
        num >>= 1;
    }
    return val;
    }
};