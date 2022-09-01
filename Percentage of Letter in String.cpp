class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt=0;
        cnt=count(s.begin(),s.end(),letter);
        int temp=100*cnt/s.size();
        
        return temp;
    }
};
