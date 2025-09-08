#include<iostream>
using namespace std;
int main()
{

    // bekar method
    // Time complexity = O(n^2)
    int arr[9] = {1,2,3,5,5,6,4,7,8};
    int c = -1;
    for(int i = 0; i < 9; i++)
    {
        for(int j = i+1; j < 9; j++)
        {
            if(arr[i] == arr[j])
            {
                c = arr[i];
                break;
            }
        }
        if(c != -1) break;
    }
    cout << c;
    return 0;
}