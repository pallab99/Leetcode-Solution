/*
 * @lc app=leetcode id=2273 lang=cpp
 *
 * [2273] Find Resultant Array After Removing Anagrams
 */

// @lc code=start
class Solution {
public:
    long long Get_hash(string s)
    {
        long long hash=1;

        for(auto it:s)
        {
            hash+=hash*(it-'a');
        }

        return hash;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        stack<long long>st;
        vector<string> res;
        for(auto it:words)
        {
            long long hash=Get_hash(it);
            if(!st.empty() and st.top()==hash)
            continue;

            st.push(hash);
            res.push_back(it);

        }

        return res;
    }
};
// @lc code=end

