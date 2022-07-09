/*
 * @lc app=leetcode id=2129 lang=cpp
 *
 * [2129] Capitalize the Title
 */

// @lc code=start
class Solution {
public:
    string capitalizeTitle(string title) {
        string word;
    stringstream iss(title);
    vector<string>s;
    while (iss >> word){
        s.push_back(word);
    }
    string ans;
    for(auto it:s)
    {
        if(it.size()<=2)
        {
            for(int i=0;i<it.size();i++)
            {
                string temp=tolower(it[i]);
                ans+=temp;

            }
        }
        else 
        {
           string temp=toupper(it[0]);
            for(int i=1;i<it.size();i++)
            {
                 temp+=tolower(it[i]);
                 ans+=temp;
            }
        }
    }

    return ans;
};
// @lc code=end

