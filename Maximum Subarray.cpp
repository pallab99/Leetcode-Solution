class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        
        int max_so_far=INT_MIN;
        int max_end_here=0;
        for(int i=0;i<nums.size();i++)
        {
            max_end_here+=nums[i];
            max_so_far=max(max_so_far,max_end_here);
            max_end_here=max(max_end_here,0);
        }
        return max_so_far;
    }
};
