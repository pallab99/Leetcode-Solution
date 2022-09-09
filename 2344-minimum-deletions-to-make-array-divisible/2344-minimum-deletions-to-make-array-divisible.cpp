class Solution {
public:
      template<typename T>T gcd(T a, T b) {if (a < 0)return gcd(-a, b); if (b < 0)return gcd(a, -b); return (b == 0) ? a : gcd(b, a % b);}

    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        int G=numsDivide[0];
        for(int i=0;i<numsDivide.size();i++)
        {
             G=gcd(G,numsDivide[i]);   
        }
        int cnt=0;
        for(int i=0;i<nums.size() and nums[i]<=G;i++)
        {
            if(G%nums[i]==0)
               return i;
        }
        
        return -1;
    }
};