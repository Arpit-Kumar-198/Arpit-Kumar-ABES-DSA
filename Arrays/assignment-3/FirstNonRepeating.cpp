#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int f = 0;
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int i = 0; i < n; i++)
    {
        int j;
        for(j = 0; j < n; j++)
        {
            if(i != j && arr[i] == arr[j]) break;
            if(j == n-1){
                cout<<arr[i];
                return 0;
            }
        }
    }
    return 0;
}