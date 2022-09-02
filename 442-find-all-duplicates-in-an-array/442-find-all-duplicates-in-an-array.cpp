class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        vector<int>ans;
        for(auto it:nums)
        {
            mp[it]++;
        }
        
        for(auto it:mp)
        {
            if(it.second>=2)
                ans.push_back(it.first);
        }
        return ans;
    }
};