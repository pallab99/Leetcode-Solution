/*
 * @lc app=leetcode id=2185 lang=cpp
 *
 * [2185] Counting Words With a Given Prefix
 */

// @lc code=start
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        int len=pref.size();
        for(auto it:words)
        {
            string tmp=it.substr(0,len);
            if(tmp==pref)
            cnt++;
        }
        return cnt;
    }
};
// @lc code=end

