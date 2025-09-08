// identify n is perfect square or not.
#include<iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    int lo = 0, hi = n;
    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(mid*mid == n)
        {
            c = 1;
            cout << "Perfect square";
            break;
        }
        else if(mid*mid < n) lo = mid + 1;
        else hi = mid - 1;
    }
    if(c == 0) cout << "Not a perfect square";
    return 0;
}