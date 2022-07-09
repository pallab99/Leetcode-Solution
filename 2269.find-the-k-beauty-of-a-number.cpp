/*
 * @lc app=leetcode id=2269 lang=cpp
 *
 * [2269] Find the K-Beauty of a Number
 */

// @lc code=start
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str=to_string(num);
        int cnt=0;

        for(int i=0;i<=str.size()-k;i++)
        {
            string ss=str.substr(i,k);
            int x=stoi(ss);
            if(x==0)
            continue;
            else 
            {
                if(num%x==0)
                cnt++;
            }
        }
    return cnt;
    }

};
// @lc code=end

