// find the subarray of maximum sum of size k
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    // sliding window approach
    int a[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;

    int maxSum = INT_MIN;
    int previousSum = 0;
    for(int i = 0; i < k; i++)
    {
         previousSum += a[i];
    }
    int windowIdx = -1;
    int i = 1, j = k;
    while(j < n)
    {
        int currentSum = previousSum + a[j] - a[i-1];
        if(currentSum > maxSum) 
        {
            maxSum = currentSum;
            windowIdx = i;
        }
        previousSum = currentSum;
        i++,j++;
    }
    cout << maxSum << endl;
    cout << "Window index = " << windowIdx;
    return 0;
}