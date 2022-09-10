class Solution {
public:
    int reverse(int x) {
        long result=0;
        while(x)
        {
            result=result*10+x%10;
            cout<<result<<endl;
            x/=10;
        }
        if(result<INT_MIN or result>INT_MAX)
            return 0;
        return result;
    }
};