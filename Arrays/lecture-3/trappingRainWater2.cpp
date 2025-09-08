class Solution {
public:
// leetcode 42
    int trap(vector<int>& height) {
        int n = height.size();
        int prev[n];
        prev[0] = -1;
        int max = height[0];
        for(int i = 1; i < n; i++)
        {
            prev[i] = max;
            if(height[i] > max) max = height[i];
        }
        prev[n-1] = -1;
        max = height[n-1];
        for(int i = n-2; i >=  0; i--)
        {
            if(max<prev[i]) prev[i] = max;
            if(height[i]>max) max = height[i];
        }
        // calculating water
        int water = 0;
        for(int i = 1; i <= n-2; i++)
        {
            if(height[i]<prev[i])
            {
                water += prev[i] - height[i];
            }
        }
        return water;
    }
};

// most efficient solution