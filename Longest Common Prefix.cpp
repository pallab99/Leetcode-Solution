class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int sz=strs.size();
        if(sz==0)
            return ans;
        if(sz==1)
            return strs[0];
        sort(strs.begin(),strs.end());
            int n=strs[0].size();
            for(int i=0;i<n;i++)
            {
                if(strs[0][i]==strs[sz-1][i])
                    ans+=strs[0][i];
                else 
                    break;
            }
        return ans;
    }
};
