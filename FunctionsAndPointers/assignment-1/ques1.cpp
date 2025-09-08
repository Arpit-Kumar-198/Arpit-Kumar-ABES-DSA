/*
    WAP to print square of first n natural numbers using function.
*/
#include<iostream>
using namespace std;
void square(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout<<i*i<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    square(n);
    return 0;
}