class Solution {
public:
    bool checkDistances(string s, vector<int>& dist) {
      map<char,vector<int>>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]].push_back(i);
        
        for(auto it:mp)
        {
            if(it.second[1]-it.second[0]-1!=dist[it.first-'a'])
                return false;
            
        }
        return true;
    }
};