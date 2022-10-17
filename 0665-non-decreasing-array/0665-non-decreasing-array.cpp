class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
    bool done = false;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            if (done)
                return false;
            
            done=true;
            if (i < 2 or nums[i - 2] <= nums[i])
                nums[i - 1] = nums[i];
            else
                nums[i] = nums[i - 1];
            
        }
    }

    return true;
    }
};