// leetcode 852
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int l = 1, h = n-2;
    while(l <= h)
    {
        int m = (h+l)/2;
        if(arr[m]>arr[m+1] && arr[m] > arr[m-1])
        {
            cout << m;
            break;
        } 
        else {
            if(arr[m] < arr[m+1]) h = m - 1;
            else l = m + 1;
        }
    }
    return 0;
}