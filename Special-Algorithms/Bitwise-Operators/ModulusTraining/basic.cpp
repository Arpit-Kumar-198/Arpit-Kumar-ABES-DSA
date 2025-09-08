#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    int n = INT_MAX;
    cout << n*2 << endl;
    cout << INT_MAX;
    //max num is : 2147483647
    // when we double this number it reverse from 2^31 -1 to -2^31 that why it is printing negative number -2
    // 2147483647*2 = 4294967294
    // after 2147483647 this compiler travel in negative direction 2147483647 times and stop at -2

    // FORMULAS

    // (a+b)%c == (a%c + b%c) % c
    // (a*b)%c == (a%c * b%c) % c
    // (a-b)%c == (a%c - b%c + c) % c
    // (a%b + b)%b will work as same as a%b
    return 0;
}