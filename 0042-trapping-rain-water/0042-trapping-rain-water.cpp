class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
    vector<int> prefix_max(n);
    vector<int> suffix_max(n);
    prefix_max[0] = height[0];
    suffix_max[n-1] = height[n - 1];
    for (int i = 1; i < n; i++)
        prefix_max[i] = max(height[i], prefix_max[i - 1]);

    for (int i = n - 2; i >= 0; i--)
        suffix_max[i] = max(suffix_max[i + 1], height[i]);

    // debug(prefix_max);
    // debug(suffix_max);
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int diff = min(prefix_max[i - 1], suffix_max[i + 1]) - height[i];
        if (diff > 0)
            ans += diff;
    }
    return ans;
    }
};