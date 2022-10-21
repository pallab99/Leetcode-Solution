class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]=i;
    }
    //for(auto it:mp)
   // cout<<it.first<<" "<<it.second<<endl;

    int res=0;
    int x=0;
    vector<int>ans;
    for(int i=0;i<s.size();i++)
    {
        res=max(res,mp[s[i]]);
        //debug(res);
        if(i==res)
        {
            if(x==0)
            {
                ans.push_back(res+1);
                x=res+1;
            }
            else 
            {
           //debug(res);
           // debug(x);
            ans.push_back(res-x+1);
            x=res+1;
           // debug(x);
            }

        }

    }
    return ans;
    }
};