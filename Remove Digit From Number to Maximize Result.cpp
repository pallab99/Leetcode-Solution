/*
 * @lc app=leetcode id=2259 lang=cpp
 *
 * [2259] Remove Digit From Number to Maximize Result
 */

// @lc code=start
class Solution {
public:
 string convert(int ind,string nums){
        return nums.erase(ind,1);
    }
    string removeDigit(string number, char digit) {
        string res;
        for(int i=0;i<number.size();i++)
        {
            if(number[i]==digit)
            {
                
                res=max(res,convert(i,number));
            }
        }

        return res;
    }
};
// @lc code=end

