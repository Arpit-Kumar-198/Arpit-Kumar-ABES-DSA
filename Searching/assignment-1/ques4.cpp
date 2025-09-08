/*
    Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
inclusive in sorted order.

There is only one repeated number in nums, return this repeated number.
Input 1: arr[] = {1,2,3,3,4}
Output 1: 3
Input 2: arr[] = {1,2,2,3,4,5}
Output 2: 2
*/
#include<iostream>
using namespace std;
int main()
{
    int n, res = -1;
    cout << "Enter size : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements : ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    int lo = 0, hi = n-1; 
    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid] == mid) hi = mid - 1;
        else {
            if(arr[mid] == arr[mid+1])
            {
                res = arr[mid];
                break;
            }
            else lo = mid + 1;
        }
    }
    cout << res;
    return 0;
}