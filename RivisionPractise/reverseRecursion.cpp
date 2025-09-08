/*
     Write a program to calculate the reverse of a given positive integer using recursion
*/
#include<iostream>
#include<cmath>
using namespace std;
int rev(int x,int n, int d)
{
    if(n==0) return x;
    return rev(x*d+n%10, n/10, 10);
}
int main()
{
    int n;
    cin >> n;
    cout << rev(0,n,10);
    return 0;
}
