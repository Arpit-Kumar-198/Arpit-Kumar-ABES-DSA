#include<iostream>
using namespace std;
int main()
{
    // Time complexity = O(n)
    int arr[9] = {1,2,3,8,5,6,4,7,8};
    int sum = 0;
    int sum2 = 8*(8+1)/2;
    for(int i = 0; i < 9; i++) sum += arr[i];
     
    cout << sum - sum2;
    return 0;
}