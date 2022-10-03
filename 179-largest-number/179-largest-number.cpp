class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b)
         {
        string s=to_string(a)+to_string(b);
        string ss=to_string(b)+to_string(a);
        return s>ss; });
        if(nums.front()==0)
        return "0";
    string res = "";
    for (auto it : nums)
        res += to_string(it);
    return res;
    }
};