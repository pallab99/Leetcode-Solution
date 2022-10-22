class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int i = 0, j = 9;
    map<string, int> mp;
    vector<string> ans;
    int n = s.size();
    while (j < n)
    {
        mp[s.substr(i, j - i + 1)]++;
        i++;
        j++;
    }

    for (auto it : mp)
        if (it.second > 1)
            ans.push_back(it.first);

    return ans;
    }
};