// no. of set bit in a number (no. of 1s in binary form )
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int setBit = 0;
    while(n > 0)
    {
        if(n%2 != 0) setBit++;
        n /= 2;
    }
    cout << setBit << endl;
}