/*
    Find minimum element using function.
*/
#include<iostream>
using namespace std;
int min(int n, int arr[])
{
    int m = arr[0];
    for(int i = 0;  i < n; i++)
    {
        if(arr[i] < m) m = arr[i];
    }
    return m;
}
int main()
{
    int arr[30], n;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int minEle = min(n, arr);
    cout<<"Minimum element in array : "<<minEle;
    return 0;
}