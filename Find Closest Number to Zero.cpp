class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                mp[nums[i]]=abs(nums[i])-0;
            }
            else
            {
                mp[nums[i]]=nums[i]-0;
            }
        }
        int ans=0;
        int mn=INT_MAX;
        for(auto it:mp)
        {
            mn=min(mn,it.second);
            //cout<<mn<<endl;
        }
        //reverse(mp.begin(),mp.end());
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
            if(mn==it->second)
            {
                ans=it->first;  
                break;
            }
        }

        return ans;
    }
};
