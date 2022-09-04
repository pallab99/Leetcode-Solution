class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       vector<int>cnt(k,0);
        int sum=0;
        for(auto it:nums)
        {
            sum+=(it%k+k)%k;
            cnt[sum%k]++;
        }
        
        int result=cnt[0];
        for(auto it:cnt)
            result+=(it*(it-1))/2;
        
        return result;
    }
};