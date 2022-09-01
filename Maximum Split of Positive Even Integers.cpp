/*
 * @lc app=leetcode id=2178 lang=cpp
 *
 * [2178] Maximum Split of Positive Even Integers
 */

// @lc code=start
class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>ans;
        if(finalSum%2)
        return ans;
        long long val=2;

        while(val<=finalSum)
        {
            ans.push_back(val);
            finalSum-=val;
            val+=2;
        }
        if(finalSum != 0) 
        ans[ans.size()-1] += finalSum;
        return ans;
    }
};
// @lc code=end

