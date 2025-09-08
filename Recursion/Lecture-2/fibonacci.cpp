#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    else return (fibo(n-1)+fibo(n-2));
}
int main()
{
    // It is an example of tree recursion
    int n;
    cin >> n;
    cout << fibo(n);
}