/* Input = 4
    A B C D E F G
    A B C   E F G
    A B       F G
    A           G
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 65; i < 65+(2*n-1); i++)
    {
        cout<<(char)i;
    }
    cout<<endl;
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = 65; j < (n-i)+65; j++)
        {
            cout<<(char)j;
        }
        for(int k = 1; k <= 2*i-1; k++)
        {
            cout<<" ";
        }
        for(int l = 69; l < 69+(n-i); l++)
        {
            cout<<(char)l;
        }
        cout<<endl;
    }
    return 0;
}