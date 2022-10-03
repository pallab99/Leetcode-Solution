class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    int n = nums.size();
    int i = 0;
    int j = 0;
    vector<int> ans(n);
    while (j < n)
    {
        ans[j] = nums[i];
        j += 2;
        i++;
    }
    j = 1;
    while (j < n and i < n)
    {
        ans[j] = nums[i];
        j += 2;
        i++;
    }
    return ans;
    }
};