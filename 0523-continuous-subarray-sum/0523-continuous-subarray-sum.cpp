class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
         int n = nums.size();
    map<int, int> mp;
    int presum = 0;
    for (int i = 0; i < n; i++)
    {
        presum += nums[i];
        presum %= k;

        if (presum == 0 and i)
            return true;

        if (mp.find(presum) != mp.end())
        {
            if (i - mp[presum] > 1)
                return true;
        }
        else mp[presum]=i;
    }
    return false;
    }
};