#include<iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int m;
    cin>>m;
    int brr[m];
    for(int i = 0; i < m; i++) cin>>brr[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i] == brr[j]) count++;
        }
    }
    if(count == n) cout<<"Subset";
    else cout<<"Not";
    return 0;
}