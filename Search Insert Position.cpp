class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int k=target;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid]==k)
                return mid;
            else if(nums[mid]<k)
                low=mid+1;
            else 
                high=mid-1;
        }
        return low;
    }
};
