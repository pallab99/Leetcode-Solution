class Solution {
public:
    int lower_bound(vector<int>& nums, int target)
    {
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]<target)
                l=mid+1;
            else 
                r=mid-1;
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int idx1=lower_bound(nums,target);
        int idx2=lower_bound(nums,target+1)-1;
        if(idx1<nums.size() and nums[idx1]==target)
        return{idx1,idx2};
        
        return {-1,-1};
    }
};
