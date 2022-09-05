typedef long long ll;
using vll = vector<ll>;
using vii = vector<int>;
using pll = pair<ll, ll>;
using ll = long long int;
using pii = pair<int, int>;
#define F first
#define S second
#define pi acos(-1.0)
#define MOD 1000000007
#define inf 1 << 30 // 2^30
#define pb emplace_back
#define no cout << "NO" << nn;
#define yes cout << "YES" << nn;
#define all(a) a.begin(), a.end()
#define SORT(a) sort(a.begin(), a.end())
#define FILL(a, n) fill(a.begin(), a.end(), n)
#define FIND(a, n) find(a.begin(), a.end(), n)
#define REVERSE(a) reverse(a.begin(), a.end())
#define REPLACE(a, n) replace(a.begin(), a.end(), n)
#define maximum(a) *max_element(a.begin(), a.end())
#define minimum(a) *min_element(a.begin(), a.end())
#define un(x) x.erase(unique(all(x)), x.end())
#define next_permutation(a) next_permutation(a.begin(), a.end())


class Solution{
    public:
     ll nCr(ll n,ll r) {
       if(r == 0) return 1;
        vector<int> v(r+1,0);
        v[0] = 1;
        for(int i=1; i<=n; i++){
            for(int j=r; j>0; j--)
                v[j] = ((v[j] % MOD) + (v[j-1] % MOD)) % MOD;
        }
        return v[r];
     }
    int numberOfWays(int a, int b, int k) {
        ll diff=abs(a-b);
        if(diff>k or abs(diff-k)&1)
            return 0;
        ll r=(k+diff)/2;
        return (ll)nCr(k,r);
    }
};