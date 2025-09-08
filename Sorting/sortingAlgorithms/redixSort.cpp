#include<iostream>
using namespace std;
int getmax(int a[], int n)
{
    int max = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > max) max = a[i];
    }
    return max;
}
void countingSort(int a[], int n, int d)
{
    int c[10] = {0};
    for(int i = 0; i < n; i++)
    {
        c[a[i]/d%10]++;
    }
    for(int i = 1; i < 10; i++)
    {
        c[i] += c[i-1];
    }
    int b[n];
    for(int i = n-1; i >= 0; i--)
    {
        b[c[a[i]/d%10] - 1] = a[i];
        c[a[i]/d%10]--;
    }
       for(int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    return;
}
void redixSort(int a[], int n)
{
    int getMax = getmax(a,n);
    int d;
    for(d = 1; getMax/d > 0; d*=10)
    {
        countingSort(a,n,d);
    }
    return;
}
int main()
{
    // T.C. = O(n)
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    redixSort(a,n);
    cout << "Sorted array : ";
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}