/* Input = 5
        1
       123
      12345
     1234567
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
        for(int j = 1; j <= n-1-i; j++)
        {
            cout<<"  ";
        }
        for(int k = 1; k <= 2*i-1; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}