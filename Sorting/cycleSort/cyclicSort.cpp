#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i]; // 4,1,6,2,5,3
    int i = 0;
    while(i < n)
    {
        int correctIdx = a[i]-1;
        if(i == correctIdx) i++;
        else swap(a[i],a[correctIdx]);
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}