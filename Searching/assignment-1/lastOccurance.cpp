#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // find last occurance of a given target in a sorted array 
    int n, target, res = -1;
    cin >> n;
    vector<int> v(n);
    cout << "Enter a sorted array : ";
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << "Enter target : ";
    cin >> target;
    int lo = 0, hi = n-1; 
    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(v[mid] == target)
        {
            res = mid;
            lo = mid + 1;
        }
        else if(v[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    cout << res;
    return 0;
}