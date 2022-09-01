class Solution {
public:
    bool ok(int mid,vector<int>& piles, int h)
    {
        int total=0;
        for(int i=0;i<piles.size();i++)
        {
            int x=piles[i]/mid;
            int y=piles[i]%mid;
            if(y)
                x++;
            total+=x;
        }
        return total<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long int l=1;
        long int r=10e9+1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(ok(mid,piles,h))
                r= mid-1;
            else 
                l=mid+1;
        }
        
        return l;
    }
};
