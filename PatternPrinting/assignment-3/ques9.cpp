/*  Input = 5
            *
           ***
          * * *
         *  *  *
        *   *   *
       ***********
        *   *   *
         *  *  *
          * * *
           ***
            *    
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= n+1-i; k++)
        {
            cout<<" ";
        }
       for(int j = 1; j <= 2*i-1; j++)
       {
        if(j == 1 || j == 2*i-1 || j == i) cout<<"*";
        else cout<<" ";
       }
       cout<<endl;
    }
    for(int i = 1; i <= 2*n+1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int k = 1; k <= n-1-i; k++)
        {
            cout<<" ";
        }
        if(i != n) cout<<"*";
        for(int k = 1; k <= n-1-i; k++)
        {
            cout<<" ";
        }
        if(i != n) cout<<"*";
        
        cout<<endl;
    }

    return 0;
}