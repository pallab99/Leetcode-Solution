class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
    for (auto it : s)
        mp[it]++;
    string ans;
    vector<pair<int, char>> v;
    for (auto it : mp)
    {
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end(), greater<>());

    for (auto it : v)
    {
        while (it.first)
        {
            ans.push_back(it.second);
            it.first--;
        }
    }
    return ans;
    }
};