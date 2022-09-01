class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        int i=0,j=0,cnt=0;
        while(i<n and j<m)
        {
            if(g[i]>s[j])
            {
                j++;
            }
            else if(s[j]>=g[i])
            {
                cnt++;
                i++;
                j++;
            }
        }
        
        return cnt;
    }
};
