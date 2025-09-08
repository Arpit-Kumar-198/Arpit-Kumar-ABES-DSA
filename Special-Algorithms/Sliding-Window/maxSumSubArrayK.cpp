// find the subarray of maximum sum of size k
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    // brute force approach : andha dhundh jaan lga di
    int a[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;

    int maxSum = INT_MIN;
    int windowIdx = -1;
    for(int i = 0; i <= n-k; i++)
    {
        int sum = 0;
        for(int j = i; j < i+k; j++)
       {
            sum += a[j];
       }
       if(sum > maxSum)
       {
        maxSum = sum;
        windowIdx = i;
       }
    }
    cout << maxSum << endl;
    cout << "Window index = " << windowIdx;
    return 0;
}