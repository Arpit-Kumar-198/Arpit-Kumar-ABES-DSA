// Write a program to apply binary search in array sorted in decreasing order.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, x, c = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cin >> x;
    int lo = 0, hi = n-1;
    while(lo <= hi)
    {
        int mid = lo + (hi-lo)/2;
        if(v[mid] == x)
        {
            cout << "Element found";
            c = 1;
            break;
        }
        else if(v[mid] > x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(c==0) cout << "Element not found";
    return 0;
}