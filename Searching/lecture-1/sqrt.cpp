#include<iostream>
using namespace std;
int main()
{
    int num, c = 1;
    cin >> num;
    int lo = 0, hi = num;
    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(mid*mid == num)
        {
            cout << mid;
            c = 0;
            break;
        }
        else if(mid*mid < num) lo = mid + 1;
        else hi = mid - 1 ;
    }
    if(c == 1) cout << hi;
}