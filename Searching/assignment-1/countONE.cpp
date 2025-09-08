// Given a sorted binary array , count total no. of 1s efficiently.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int lo = 0, hi = n-1;
    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid] == 1) hi = mid - 1;
        else lo = mid + 1;
    }
    cout << "No. of 1s : " << (n-lo);
}