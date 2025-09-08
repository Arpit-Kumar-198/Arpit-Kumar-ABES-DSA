#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    /*
        given an array of digits (value are from 0 to 9), the task is to find the minimum possible sum of two numbers
        formed from digits of the array . Please note that all digits of the array must be used to form the two numbers.
    */
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 1; i < n; i++)
    {
        int j = i;
        while(j >= 1 && arr[j] < arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    int a = 0, b = 0;
    for(int i = 0; i < n; i++)
    {
        a = a*10;
        a += arr[i];
    }
   for(int i = n-1; i >= 0; )
   {
       if(arr[i] != arr[i-1])
       {
           swap(arr[i],arr[i-1]);
           break;
       }
       else
       {
           i--;
       }
   }
   for(int i = 0; i < n; i++)
    {
        b = b*10;
        b += arr[i];
    }
    cout << b+a;
    return 0;
}