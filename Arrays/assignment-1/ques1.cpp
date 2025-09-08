/*
    product of elements of array .
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[30], p = 1, n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements in array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        p = p * arr[i];
    }
    cout<<"Product of all elements of array : "<<p;

    return 0;
}