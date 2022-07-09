/*
 * @lc app=leetcode id=2255 lang=cpp
 *
 * [2255] Count Prefixes of a Given String
 */

// @lc code=start
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
         int c=0,ns=s.size();
        for(auto&i:words){
            int ni=i.size();
            if(ni>ns)continue;
            if(s.substr(0,ni)==i)c++;
        }
        return c;
    }
};
// @lc code=end

