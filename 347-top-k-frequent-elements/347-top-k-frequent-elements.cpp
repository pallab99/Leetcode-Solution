class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
        vector<pair<int,int>>p;
        for(auto it:mp)
            p.push_back(it);
   
    sort(p.begin(),p.end(),[&](pair<int,int>a,pair<int,int>b)
         {
            return a.second>=b.second; 
         });
        vector<int>ans;
         for(auto it:p)
            {
             if(k==0)
                 break;
             ans.push_back(it.first);
             k--;
         }
        return ans;
    }
};