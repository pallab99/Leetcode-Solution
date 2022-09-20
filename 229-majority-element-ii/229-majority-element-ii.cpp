class Solution
{
public:
  vector<int> majorityElement(vector<int> &nums)
  {
    int ele1 = -1, ele2 = -1, vote1 = 0, vote2 = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
      if (ele1 == nums[i])
        vote1++;
      else if (ele2 == nums[i])
        vote2++;
      else if (vote1 == 0)
      {
        ele1 = nums[i];
        vote1 = 1;
      }
      else if (vote2 == 0)
      {
        ele2 = nums[i];
        vote2 = 1;
      }
      else
      {

        vote1--;
        vote2--;
      }
    }
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
      if (ele1 == nums[i])
        cnt1++;
      else if (ele2 == nums[i])
        cnt2++;
    }

    vector<int> ans;

    if (cnt1 > n / 3)
      ans.push_back(ele1);
    if (cnt2 > n / 3)
      ans.push_back(ele2);

    return ans;
  }
};
