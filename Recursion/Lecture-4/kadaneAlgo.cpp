#include<iostream>
using namespace std;
#include<vector>
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
int maxSubArray(vector<int> &nums)
{
    int n = nums.size();

    int sum = 0;
    int maxi = nums[0];
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}
int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(arr);
    return 0;
}