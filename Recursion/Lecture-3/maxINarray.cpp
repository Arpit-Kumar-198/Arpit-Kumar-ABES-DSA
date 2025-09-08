#include<iostream>
#include<climits>
using namespace std;
// void maxINarray(int a[], int idx, int n, int max)
// {
//     if(idx == n) {
//         cout << max;
//         return;
//     }
//     if(max < a[idx])
//     {
//         max = a[idx];
//     }
//     return maxINarray(a, idx+1, n, max);
// }
int maxINarray(int a[], int n, int idx)
{
    if(idx == n) return INT_MIN;
    return (max(a[idx], maxINarray(a,n,idx+1)));
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n ; i++) cin >> a[i];
    // 1st method :  maxINarray(a,0,n,INT_MIN);
    cout << maxINarray(a,n,0);
}