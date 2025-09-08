/*
    you have n coins and you want to build a staircase with these coins. the staircase consists of k rows and
    ith row consists of i coins. the last row of staircase may be incomplete. given integer n , find
    minimum possible staircase you can build.
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1, c = 0;
    while(i <= n)
    {
        c++;
        n = n-i;
         i++;
    }
    cout << c;
    return 0;
}