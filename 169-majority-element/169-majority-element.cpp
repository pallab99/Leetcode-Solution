class Solution {
public:
    int majorityElement(vector<int>& nums) {
     map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        int ans=0;
        int n=nums.size();
        for(auto it:mp)
        {
            if(it.second>n/2)
            {
                ans=it.first;
                break;
            }
     
        }
        
        return ans;
    }
};