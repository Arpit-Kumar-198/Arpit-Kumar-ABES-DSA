#include<iostream>
using namespace std;
int sum(int n)
{
    if(n == 1) return 1;
    return (n + sum(n-1));
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
// Head Recursion
// In head recursion, the recursive call happens before any computation in the function.

//The function does its recursive call first and processes the results of the recursive calls afterward.