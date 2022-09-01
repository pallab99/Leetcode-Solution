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
