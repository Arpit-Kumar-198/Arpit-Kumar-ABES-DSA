/*  Input = 4
      A
    A B
  A B C
A B C D
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
        for(int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for(int k = 65; k < 65+i; k++)
        {
            cout<<(char)k<<" ";
        }
        cout<<endl;
    }
    return 0;
}