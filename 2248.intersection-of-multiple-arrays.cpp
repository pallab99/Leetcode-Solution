/*
 * @lc app=leetcode id=2248 lang=cpp
 *
 * [2248] Intersection of Multiple Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> m;
        vector<int> ans;
        for(auto it:nums)
        {
            for(auto x:it)
            {
                m[x]++;
            }
        }
        
        for(auto it:m)
        {
            int temp;
            if(it.second==nums.size())
            {
                ans.push_back(it.first);
            }
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

