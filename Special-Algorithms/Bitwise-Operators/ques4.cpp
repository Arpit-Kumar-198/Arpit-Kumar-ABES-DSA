// calculate no. of flips required to make a number another number .
// for example 5 = 0101 and 1 = 1011 ans will be 3
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    int tgt;
    cin >> tgt;

    // jha jha bit diff hai vha flip kro bas
    // XOR => same bit output = 0
    int temp = (num^tgt);
    int c = 0;
    while(temp > 0)
    {
        if(temp%2 != 0) c++;
        temp /= 2;
    }
    cout << c << endl;
    return 0;
}