#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    /*
        Given an array with N distinct elemenst, convert the given array to a form where all
        elements are in the range from 0 to N-1. The order of elements is the same , i.e. , 0 
        is placed of the smallest element , 1 is placed for the second smallest element, ....
        N-1 is placed for the largest element.
    */
    int n;
    cout << "enter size : ";
    cin >> n;
    vector<int> arr(n);
    vector<int> brr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) brr[i] = arr[i];
    sort(brr.begin(),brr.end());
    for(int i = 0; i < n; i++)
    {
        int f = brr[i];
        for(int j = 0; j < n; j++)
        {
            if(f==arr[j]) arr[j] = i;
        }
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
/*
int arr[] = {19,12,23,8,16};
    int n = 5;
    vector<int> v(n,0);5
    int x  = 0;
    for(int i = 0; i < n; i++)
   {
        int midx = -1, min = INT_MAX;
        for(int j = 0; j < n; j++)
        {
            if(v[j] == 1) continue;
            else if(arr[j] < min)
            {
                min = arr[j];
                midx = j;
            }
        }
        arr[midx] = x;
        v[midx] = 1;
        x++;
   }
   for(int i = 0; i < n; i++) cout << arr[i] << " ";
*/