class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
     
        while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] == target)
            return m;
        if (nums[m] > nums[r])
            {
              if(target>=nums[l] and target<nums[m])
                  r=m-1;
            else 
                l=m+1;
            }
        else if(nums[m] < nums[l])
           { 
            if(target>nums[m] and target<=nums[r])
                l=m+1;
            else 
                r=m-1;
           }
            else 
            {
                if (target < nums[m])
                    r = m - 1;
                else
                    l = m + 1;
            }
    }
    return -1;
    }
};
