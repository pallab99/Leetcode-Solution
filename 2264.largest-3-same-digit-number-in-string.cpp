/*
 * @lc app=leetcode id=2264 lang=cpp
 *
 * [2264] Largest 3-Same-Digit Number in String
 */

// @lc code=start
class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
         int maxVal=INT_MIN;
        for(int i=0;i<n-2;i++)
        {
            if(num[i] == num[i + 1] && num[i + 1] == num[i + 2])
            {
                maxVal = max(maxVal, (int)num[i]);
            }
        }

        if(maxVal<0)
        return "";
        string ans="";

        ans+=(char)maxVal;
        ans+=(char)maxVal;
        ans+=(char)maxVal;

        return ans;
    }
};
// @lc code=end

