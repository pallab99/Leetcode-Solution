class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int mx=0;
        while(l<r)
        {
            int h=min(height[l],height[r]);
            int w=r-l;
            int area=h*w;
            mx=max(mx,area);
            if(height[l]<height[r])
                l++;
            else if(height[l]>height[r])
                r--;
            else 
            {
                l++;
                r--;
            }
        }
        return mx;
    }
};