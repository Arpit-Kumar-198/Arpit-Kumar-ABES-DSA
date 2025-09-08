/*  Input = 5
    *               *
      *           *
        *       *
          *   *
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
        for(int j = 1; j <= i-1; j++)
        {
            cout<<"  ";
        }
        cout<<"* ";
        for(int j = 1; j <= 2*(n-i)-1; j++)
      {       
        cout<<"  ";
      }
        if(i == n) continue;
        else cout<<"* ";
        cout<<endl;
    }

    return 0;
}