#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    for(int i = 1; i < n; i++) a[i] = a[i-1]+a[i];  // prifix sum
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}