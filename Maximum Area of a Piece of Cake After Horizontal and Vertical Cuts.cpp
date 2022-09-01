class Solution {
public:
    int maxdiff(vector<int>& v,int l,int n)
    {
        sort(v.begin(),v.end());
        int mx=v[0];
        for(int i=0;i<n-1;i++)
        {
            int dif=abs(v[i]-v[i+1]);
            mx=max(dif,mx);
        }
        
        mx=max(mx,l-v.back());
        return mx;
    }
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long x=maxdiff(horizontalCuts,h,horizontalCuts.size());
        long y=maxdiff(verticalCuts,w,verticalCuts.size());
            
            return (x*y)%1000000007;
    }
};
