class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp, mp1;
    for (auto it : s)
        mp[it]++;
    for (auto it : t)
        mp1[it]++;
    return mp == mp1;
    }
};