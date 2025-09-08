#include<iostream>
using namespace std;
int main()
{
    // count the number of triplets whose sum is equal to the given value x.
    int size, count = 0;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements : ";
    for(int i = 0; i < size; i++) cin>>arr[i];
    int x;
    cout<<"Enter element : ";
    cin>>x;
    for(int i = 0; i < size-2; i++)
    {
        for(int j = i+1; j < size-1; j++)
        {
            for(int k = j+1; k < size; k++)
            {
                if(arr[i] + arr[j] + arr[k] == x) count++;
            }
        }
    }
    cout<<"No. of triplets are : "<<count;
    return 0;
}