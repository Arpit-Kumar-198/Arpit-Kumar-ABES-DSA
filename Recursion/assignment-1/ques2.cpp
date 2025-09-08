/*
 Write a program to print the sum of all odd numbers from a to b (inclusive) using
recursion */
#include<iostream>
using namespace std;
void oddNo(int x, int a, int b)
{
    if(a >= b)
    {
        if(b%2 != 0 && a%2 != 0) x = x+b;
        cout << x;
        return;
    }
    else {
        if(a%2 != 0) oddNo(x+a,a+2,b);
        else oddNo(x+a+1, a+2, b);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    oddNo(0,a,b);
    return 0;
}