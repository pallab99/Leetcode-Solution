class Solution {
public:
    string digitSum(string s, int k) {
        int n=s.size();

        while(s.size()>k)
        {
            string s1;
            int temp=0;

            for(int i=0;i<s.size();i++)
            {
                temp+=(int)s[i]-'0';

                if((i+1)%k==0)
                {
                    s1+=to_string(temp);
                    temp=0;
                }
                if((i+1)%k!=0 and i==s.size()-1)
                s1+=to_string(temp);
            }

            s=s1;
        }
        return s;
    }
};
