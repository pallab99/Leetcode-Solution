class Solution {
public:
    bool ok(int mid,vector<int>& bloomDay, int m, int k)
    {
        int num=k;
        for(auto it:bloomDay)
        {
            if(it<=mid)
                num--;
            else 
                num=k;
            if(num==0)
            {
                m--;
                num=k;
            }
        }
        return m<=0;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m*k>bloomDay.size())
            return -1;
        
        int l=1;
        int r=*max_element(bloomDay.begin(),bloomDay.end());
        while(l<=r)
        {
             int mid=l+(r-l)/2;
              if(ok(mid,bloomDay,m,k))
            r=mid-1;
            else 
                l=mid+1;
        }
        
        return l;
    }
};
