/*
 * @lc app=leetcode id=2007 lang=cpp
 *
 * [2007] Find Original Array From Doubled Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2)
        return {};

        map<int,int>mp;
        sort(changed.begin(),changed.end());
        vector<int>ans;
        for(auto it:changed)
        mp[it]++;

        for(auto it:changed)
        {
            if(mp[it]==0)
            continue;
            if(mp[it*2]==0)
            return {};
            ans.push_back(it);
            mp[it]--;
            mp[it*2]--;

        }
        return ans;

    }
};
// @lc code=end

