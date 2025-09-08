#include<iostream>
using namespace std;
int main()
{
    // counting sort is stable but not inplace(inplace means sorting in same array)
    // T.C. = O(n)
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max) max = a[i];
    }
    int c[max+1] = {0};

    for(int i = 0; i < n; i++)
    {
        c[a[i]]++;
    }
    for(int i = 1; i <= max; i++)
    {
       c[i] = c[i]+c[i-1];
    }
    int b[n];
    for(int i = n-1; i >= 0; i--)
    {
       b[c[a[i]]-1] = a[i];
       c[a[i]]--;
    }
     for(int i = 0; i < n; i++)
    {
      a[i] = b[i];
    }
     for(int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
}