class Solution {
public:
    void moveZeroes(vector<int>& nums) {
           int n = nums.size();
    int x = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
            nums[x++] = nums[i];
    }
    for (int i = x; i < n; i++)
        nums[i] = 0;

    }
};