class Solution {
public:
    bool ok(int mid,vector<int>& nums,int t)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int x=ceil(nums[i]/mid);
            if(x==0)
                x=1;
            //cout<<"x :"<<x<<endl;
            sum+=x;
            
           // cout<<"sum :"<<sum<<endl;
        }
        if(sum<=t)
            return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int r=1000001;
        int ans=0;
        while(l<=r)
        {
           long long  int sum=0;
            int mid=l+(r-l)/2;
            for(int i=0;i<nums.size();i++)
            {
                 if(nums[i]%mid==0)
                     sum+=nums[i]/mid;
                else 
                    sum+=(nums[i]/mid)+1;
            }
            if(sum>threshold){
                l=mid+1;
            } else{
                ans=mid;
                r=mid-1;
            }
            
        }
       // bool ok1=ok(3,nums,threshold);
        return ans;
    }
};
