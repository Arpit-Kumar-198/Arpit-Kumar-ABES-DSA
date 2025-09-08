// given an integer array where every element occur twice except one , find that element.

#include<iostream>
using namespace std;
int main()
{
    // num^num = 0
    // 0^num = num  
    // this property is very usefull
    int n;
    cin >> n;
    int a[n];

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans = ans^a[i];
    }
    cout << ans;
    return 0;
}