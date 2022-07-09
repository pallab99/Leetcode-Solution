/*
 * @lc app=leetcode id=2176 lang=cpp
 *
 * [2176] Count Equal and Divisible Pairs in an Array
 */

// @lc code=start
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {

        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j] and ((i*j)%k==0))
                cnt++;

            }
        }


        return cnt;
    }
};
// @lc code=end

