/*
    Find second largest number in an array .
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[30], size;
    cout<<"Enter size of array : ";
    cin>>size;
    cout<<"Enter elements of array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max) max = arr[i];
    }
    int max2 = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max2 && arr[i] != max) max2 = arr[i];
    }
    cout<<"Second largest element : "<<max2;
    
    return 0;
}