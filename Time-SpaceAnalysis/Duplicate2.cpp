#include<iostream>
using namespace std;
int main()
{

    // taking more memory
    // Time complexity = O(n)
    int arr[9] = {1,2,3,6,5,6,4,7,8};
    int arr2[9] = {0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < 9; i++)
    {
        int idx = arr[i];
         if(arr2[idx]==0) arr2[idx] = 1;
         else{
             cout << arr[i];
             break;
         }
        
    }
    return 0;
}