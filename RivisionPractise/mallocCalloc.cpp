#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = (int*)calloc(n,sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    cout << arr[3];
    free(arr);
    return 0;
}