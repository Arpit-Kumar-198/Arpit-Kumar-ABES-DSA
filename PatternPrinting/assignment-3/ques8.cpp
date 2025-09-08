/*  Input = 4
      1
     2 2
     3  3
     4   4
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
        if(i == 1) cout<<" ";
        cout<<i;
      for(int j = 1; j <= i-1; j++)
      {       
        cout<<" ";
      }
        if(i != 1) cout<<i;
        cout<<endl;
    }

    return 0;
}