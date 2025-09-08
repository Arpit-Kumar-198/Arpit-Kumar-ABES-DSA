#include<iostream>
using namespace std;
double power(int x, int n)
{
    if(n == 1) return x;
    double ans = power(x,n/2);
    if(n%2 == 0) return ans*ans;
    else return x*ans*ans;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << power(x,n);
    return 0;
}