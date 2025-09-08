#include<iostream>
using namespace std;
int main()
{
    // rotation of matrix by 90 degrees.
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int brr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    for(int j = 0; j < m; j++)
    {
        for(int i = 0, k = n-1; i < k; i++,k--)
        {
            int t = brr[i][j];
            brr[i][j] = brr[k][j];
            brr[k][j] = t;
        }
    }
     for(int i = 0; i < n; i++)
    {
       for(int j = 0; j < m; j++)
        {
            cout<<brr[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}