class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int l=1;
        int r=1;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            l*=nums[i];
            r*=nums[nums.size()-i-1];
            res=max({res,l,r});
            if(l==0)
                l=1;
            if(r==0)
                r=1;
        }
        return res;
    }
};