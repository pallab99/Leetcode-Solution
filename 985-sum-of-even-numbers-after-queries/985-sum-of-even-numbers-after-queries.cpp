class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int sum=0;
        for(auto it:nums)
        {
            if(it%2==0)
            sum+=it;
        }
        vector<int>ans;
        for(int i=0;i<q.size();i++)
        {
            int index=q[i][1];
            int val=q[i][0];
            if(nums[index]%2==0)  //if the element is already even we need to eliminate it from the sum
            sum-=nums[index];

            nums[index]+=val; //update the array with new value;

            if(nums[index]%2==0)  //again we will check if the updated array value is even or not.if even then add it to the sum.
            sum+=nums[index];
            ans.push_back(sum);
        }
        return ans;
    }
};

