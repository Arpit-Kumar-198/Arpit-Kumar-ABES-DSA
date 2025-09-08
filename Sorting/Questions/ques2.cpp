#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*
       push zeroes to end while maintaining the relative order of other elements
    */
   int n;
   cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int p = 0; p < n-1; p++)
    {
        for(int s = 0; s < n-p-1; s++)
        {
            if(arr[s] == 0)
            {
                int t = arr[s];
                arr[s] = arr[s+1];
                arr[s+1] = t;
            }
        }
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}