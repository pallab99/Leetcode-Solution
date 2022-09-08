class Solution {
public:
    typedef long long ll;

    int countPrimes(int n) {
    vector<ll>prime;
   vector<bool> status(n + 1, true);
    status[0]=0;
    status[1]=0;
    for(int i=2; i*i<=n; i++)
    {
        if(status[i])
            for(int j=2; i*j<=n; j++)
                status[i*j]=0;
    }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(status[i])
                cnt++;
           
        }
        return cnt;
    }
};