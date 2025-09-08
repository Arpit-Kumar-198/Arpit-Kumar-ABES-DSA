/* Input = 4
    1 2 3 4 3 2 1
    1 2 3   3 2 1
    1 2       2 1
    1           1
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
        cout<<i;
    }
    for(int i = n-1; i > 0; i--)
    {
        cout<<i;
    }
    cout<<endl;
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout<<j;
        }
        for(int k = 1; k <= 2*i-1; k++)
        {
            cout<<" ";
        }
        for(int l = n-i; l > 0; l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}