/*
    given a sorted array of +ve distinct integers, find the smallest missing +ve element in it.
    e.g. => {0,1,2,3,7,8,9,11} 
    ans = 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    // for(int i = 0; i < n; i++)
    // {
    //     if(i != arr[i]) 
    //     {
    //         cout << i;
    //         break;
    //     }
    // }
    int lo = 0, hi = n-1, miss = -1;
    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid] == mid) lo = mid + 1;
        else 
        {
            miss = mid;
            hi = mid - 1;
        }
    }
    cout << miss;
    return 0;
}