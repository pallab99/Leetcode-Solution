class Solution {
public:
    bool ok(int mid,vector<int>& weights, int days)
    {
        int cnt=1;
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
           sum+=weights[i];
            if(sum>mid)
            {
                cnt++;
                sum=weights[i];
            }
        }
        return cnt<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxCap=0;
        for(auto weight: weights) 
            maxCap += weight;
        
        int l = *max_element(weights.begin(), weights.end());
        int r = maxCap;
        int result=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(ok(mid,weights,days))
            {
                result=mid;
                r=mid-1;
            }
            else 
                l=mid+1;
        }
        return result;
    }
};
