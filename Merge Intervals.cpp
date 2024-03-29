class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int n=intervals.size();
        if(n==0)
            return ans;
        sort(intervals.begin(),intervals.end());
        vector<int>tmp=intervals[0];
        for(auto it:intervals)
        {
            if(it[0]<=tmp[1])
            {
                tmp[1]=max(it[1],tmp[1]);
            }
            else 
            {
                ans.push_back(tmp);
                tmp=it;
            }
        }
        ans.push_back(tmp);
        return ans;
    }
};
