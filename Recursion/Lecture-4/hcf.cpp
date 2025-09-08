// T.C. = log(a+b)
#include<iostream>
using namespace std;
int hcf(int a, int b)
{
    if(b%a == 0) return a;
    return hcf(b%a,a);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << hcf(a,b);
    return 0;
}