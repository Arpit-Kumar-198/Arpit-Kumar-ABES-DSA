#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    // to print array we can write for(ele : arr) cout << ele << " ";
    for(int i = 0; i < n-1; i++)
    {
        int min = INT_MAX;
        int minIdx = -1;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                minIdx = j;
            }
        }
        int t = arr[minIdx];
       arr[minIdx] = arr[i];
       arr[i] = t;
    }
      for(int i = 0; i < n; i++) cout << arr[i] <<" ";
    return 0;
}