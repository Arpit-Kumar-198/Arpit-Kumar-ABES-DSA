// WAP to print the index of row having max sum and also print that sum.
#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
             cin>>arr[i][j];
        }
    }
   int s = 0, idx;
    for(int i = 0; i < m; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if(s < sum)
        {
            s = sum;
            idx = i;
        }
    }
    cout<<"index = "<<idx<<endl<<"Maxsum = "<<s;
    return 0;
}