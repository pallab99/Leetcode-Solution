class Solution {
public:
    bool ok(int m,vector<int>& nums, int o)
    {
        for(int i=0;i<nums.size();i ++)
      {
        o-=(nums[i]/m);
       if(nums[i]%m == 0)o ++;
      }
        return o>=0;
    }
    int minimumSize(vector<int>& nums, int o) {
        int l=1;
        int r=1e9;
        int x=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(ok(mid,nums,o))
                r=mid-1;
            else 
                l=mid+1;
        }
        
        return l;
    }
};
