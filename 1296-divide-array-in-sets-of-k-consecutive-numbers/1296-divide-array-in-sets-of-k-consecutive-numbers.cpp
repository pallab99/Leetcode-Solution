class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
    if (n % k != 0)
        return false;
    map<int, int> mp;
    for (auto it : nums)
        mp[it]++;

    while (mp.size())
    {
        int cur = mp.begin()->first;
        for (int i = 0; i < k; i++)
        {
            if (mp.find(cur + i) == mp.end())
                return false;
            mp[cur + i]--;
            if (mp[cur + i] == 0)
                mp.erase(cur + i);
        }
    }
    return true;
    }
};