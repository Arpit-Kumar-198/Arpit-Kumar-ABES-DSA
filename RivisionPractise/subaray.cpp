#include<iostream>
using namespace std;
int main()
{
    int arr[3] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        string subarr = "";
        for (int j = i; j < n; j++)
        {
            subarr += to_string(arr[j]) + " ";
            cout << subarr << endl;
        }
    }

    return 0;
}