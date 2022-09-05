class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        map<int,int>mp;
        mp[0]=1;
        int ans=0;
        for(auto it:nums)
        {
            sum+=it;
            cout<<"Sum "<<sum<<endl;
            int need=sum-k;
            cout<<"need "<<need<<endl;
            if(mp.count(need)>0)
            {
                ans+=mp[need];
            }

            mp[sum]++;
        }
    return ans;
    }
};
