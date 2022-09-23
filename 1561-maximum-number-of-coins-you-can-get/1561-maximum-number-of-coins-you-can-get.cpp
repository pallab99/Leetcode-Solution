class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int ans=0;
        int lim=piles.size()/3;
        int cnt=0;
        for(int i=1;i<piles.size();i+=2)
        {
            cnt++;
            ans+=piles[i];
            if(cnt==lim)
                break;
        }
        return ans;
        
    }
};