// pridict the output 
#include<iostream>
using namespace std;
int fun(int n)
{
    if(n <= 1) return 1;
    if(n % 2 == 0) return fun(n/2);
    return (fun(n/2) + fun(n/2 + 1));
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}