class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int cnt = 0;
    map<int, int> mp;
    for (auto it1 : nums1)
    {
        for (auto it2 : nums2)
            mp[it1 + it2]++;
    }
    for (auto it3 : nums3)
    {
        for (auto it4 : nums4)
            cnt += mp[0-(it3 + it4)];
    }
    return cnt;
    }
};