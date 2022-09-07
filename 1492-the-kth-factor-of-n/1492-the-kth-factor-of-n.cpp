class Solution {
public:
    int kthFactor(int n, int k) {
       
          vector<int>ans;
        int cnt=0;
        int sq=sqrt(n);
        for(int i=1;i<=sq;i++)
        {
            if(n%i==0)
               {
                if(i*i==n)
                {
                    cnt++;
                    ans.push_back(i);
                }
                else 
                {
                    cnt+=2;
                    ans.push_back(i);
                    ans.push_back(n/i);
                }
                
                }
        }
        sort(ans.begin(),ans.end());
        if(cnt<k)
            return -1;
        return ans[k-1];
    }
};