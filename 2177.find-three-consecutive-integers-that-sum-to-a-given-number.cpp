/*
 * @lc app=leetcode id=2177 lang=cpp
 *
 * [2177] Find Three Consecutive Integers That Sum to a Given Number
 */

// @lc code=start
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>ans;

        if(num%3==0)
        {
            ans.push_back((num/3)-1);
            ans.push_back((num/3));
            ans.push_back((num/3)+1);
        }
        return ans;
    }
};
// @lc code=end

