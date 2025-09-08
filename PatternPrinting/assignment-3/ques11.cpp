/*  Input = 4
    *******
    *** ***
    **   **
    *     *
    **   **
    *** ***
    *******
*/
#include<iostream>
using namespace std;
int main()
{
    int n, x, y;
    cout<<"Enter n : ";
    cin>>n;
    x = n-1;
    y = n-3;
    for(int i = 1; i <= 2*n-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        for(int k = 1; k <= 2*i-1; k++)
        {
            cout<<" ";
        }
        for(int l = 1; l <= n-i; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1; i <= (2*n-1)-(n+1); i++)
    {
        for(int j = 1; j <= i+1; j++)
        {
            cout<<"*";
        }
        for(int k = 1; k <= (2*((2*n-1)-(n+1)))-(2*i-1); k++)
        {
            cout<<" ";
        }
        for(int l = 1; l <= i+1; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1; i <= 2*n-1; i++)
    {
        cout<<"*";
    }
    return 0;
}