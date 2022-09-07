/*
 * @lc app=leetcode id=43 lang=cpp
 *
 * [43] Multiply Strings
 */

// @lc code=start
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" or num2=="0")
            return "0";
        int n=num1.size();
        int m=num2.size();
        vector<int>prod(n+m,0);

        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                prod[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                prod[i + j] += prod[i + j + 1] / 10;
                prod[i + j + 1] %= 10;
                
            }
        }

        // for(auto it:prod)
        // cout<<it<<" ";
        // return "0";
        int idx=0;
        string ans;
        while(idx<prod.size() and prod[idx]==0)
            idx++;
      for(int i=idx;i<prod.size();i++)
            ans.push_back(prod[i]+'0');
        
        
        return ans;
    }
};
// @lc code=end

