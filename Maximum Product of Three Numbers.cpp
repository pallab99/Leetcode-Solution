class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());

        int ans=nums[0]*nums[1]*nums[2];
        int ans2=nums[0]*nums[n-1]*nums[n-2];
        return max(ans,ans2);
    }
};
