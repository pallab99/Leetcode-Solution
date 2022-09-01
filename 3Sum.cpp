class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
            mp[nums[i]]=i;
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                int need=-1*(nums[i]+nums[j]);
                
                if(mp.count(need) and mp.find(need)->second > j)
                    ans.push_back({nums[i] , nums[j] , need});
                
                j=mp.find(nums[j])->second;
            }
            i=mp.find(nums[i])->second;
        }
        return ans;
    }
};
