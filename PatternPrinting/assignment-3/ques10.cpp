/*  Input = 4
    *     *
    **   **
    *** ***
    *******
    *******
    *** ***
    **   **
    *     *
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n; 
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"A ";
        }
        for(int k = 1; k <= n-i; k++)
        {
            cout<<"  ";
        }
        for(int m = 1; m <= n-i-1; m++)
        {
            cout<<"  ";
        }
        for(int g = 1; g <= i; g++)
        {
            cout<<"S ";
        }
        cout<<endl;
    }
    for(int i = 1; i <= 2; i++)
    {
        for(int j = 1; j <= 2*n-1; j++)
        {
            if(i == 1) cout<<"A ";
            else cout<<"S ";
        }
        cout<<endl;
    }
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout<<"A ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout<<"  ";
        }
        for(int m = 1; m <= i-1; m++)
        {
            cout<<"  ";
        }
        for(int g = 1; g <= n-i; g++)
        {
            cout<<"S ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}