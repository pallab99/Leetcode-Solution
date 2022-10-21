class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]] = i;

    int res = 0;
    int x = 0;
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
        res = max(res, mp[s[i]]);
        if (i == res)
        {
            
                ans.push_back(res - x + 1);
                x = res + 1;
            
        }
    }
    return ans;
    }
};