class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        int mn=INT_MAX;
        bool flag=false;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(sum-target)<mn)
                {
                    mn=abs(sum-target);
                    ans=sum;
                }
                else if(sum<target)
                    l++;
                else if(sum>target)
                    r--;
                else 
                {
                    ans=sum;
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }
        
        return ans;
    }
};