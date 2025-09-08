#include<iostream>
using namespace std;
int main()
{
    // in subarray elements should be in continuous manner like in this case {1,3} will not be a part of subarray.
    int a[3] = {1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < n; i++)
    {
        for(int k = i; k < n; k++)
        {
            for(int j = i; j <= k; j++) cout << a[j] << " ";
            cout << endl;
        }
    }
    return 0;
}
