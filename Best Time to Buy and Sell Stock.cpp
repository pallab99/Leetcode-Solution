class Solution {
public:
    int maxProfit(vector<int>& prices) {
           int mn=INT_MAX;
       int profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            mn=min(mn,prices[i]);
            profit=max(profit,prices[i]-mn);
        }
        return profit;
    }
};
