class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans=nums[i];
                break;
            }
        }
        while(l<r)
        {
            if(nums[l]==nums[r])
            {
                ans=nums[l];
                break;
            }
            else 
            {
                l++;
                r--;
            }
        }
        l=0;
         r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]==nums[r])
            {
                ans=nums[l];
                break;
            }
            else 
            {
               
                r--;
            }
        }
         l=0;
         r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]==nums[r])
            {
                ans=nums[l];
                break;
            }
            else 
            {
                l++;
               
            }
        }
        
        return ans;
    }
};