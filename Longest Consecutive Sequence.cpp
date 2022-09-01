class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        int mx=0;
        
        for(auto it:st)
        {
            if(st.count(it-1))
                continue;
            int tmp=1;
            while(st.count(tmp+it))
                tmp++;
                mx=max(mx,tmp);
        }
        
        return mx;
    }
};
