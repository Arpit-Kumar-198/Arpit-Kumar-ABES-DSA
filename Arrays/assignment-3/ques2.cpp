#include<iostream>
using namespace std;
long double fact(long double n)
{
    if(n == 0 || n == 1) return 1;
    else return (n * fact(n-1));
}
int main()
{
    // find the factorial of a large number.
    // last limit n = 1754
    long double n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<fact(n);
    return 0;
}