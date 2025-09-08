// given a matrix having only 0 and 1 , each row is sorted in increasing order
// find the row having max no. of 1s.
#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter order : ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter elements (0 or 1) : ";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++) cin >> arr[i][j];
    }
    int max1row = -1, idx = -1;
    for(int i = 0; i < m; i++)
    {
        int lo = 0, hi = n-1;
        while(lo <= hi)
        {
            int mid = (lo+hi)/2;
            if(arr[i][mid] == 1) hi = mid - 1;
            else lo = mid + 1;
        }
        if(n-lo > max1row)
        {
            max1row = (n-lo);
            idx = i;
        }
    }
    cout << "Row having max 1s is : " << idx << endl << "And no. of 1s are : " << max1row;
    return 0;
}