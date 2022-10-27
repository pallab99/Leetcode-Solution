class Solution {
public:
    int atmost(vector<int> &nums, int k)
{
    int i = 0;
    int j = 0;
    map<int, int> mp;
    int ans = 0;
    while (i < nums.size())
    {
        mp[nums[i]]++;
        while (mp.size() > k)
        {
            auto it = mp.find(nums[j]);
            it->second--;
            if (it->second == 0)
                mp.erase(nums[j]);
            j++;
        }

        ans += (i - j) + 1;
        i++;
    }

    return ans;
}
int subarraysWithKDistinct(vector<int> &nums, int k)
{
    return atmost(nums, k) - atmost(nums, k - 1);
}

};