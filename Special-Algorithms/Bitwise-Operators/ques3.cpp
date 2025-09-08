// find the max power of 2 that is smaller than n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int maxpower = 0;
    while(n > 0)
    {
        maxpower = n;
        n = n & (n-1);
    }
   
    cout << maxpower << endl;
    // just large power k liye 2 se multiply kr lo
}