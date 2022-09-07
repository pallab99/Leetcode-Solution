class Solution {
public:
    int kthFactor(int n, int k) {
       
          vector<int>ans;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                {
                cnt++;
                    ans.push_back(i);
                }
        }
        
        if(cnt<k)
            return -1;
        return ans[k-1];
    }
};