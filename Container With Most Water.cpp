class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0,n=height.size();
        int left=0,right=n-1;
        for(int i=1;i<n;i++)
        {
            maxwater=max(maxwater,(min(height[left],height[right])*(right-left)));
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxwater;
    }
};
