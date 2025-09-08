/*
 There are n stairs, and a person standing at the bottom wants to climb the stairs to
reach the nth stair. The person can climb either 1, 2, or 3 stairs at a time. Write a
program to count the number of ways the person can reach the top using recursion.
*/
#include<iostream>
using namespace std;
int stairs(int n)
{
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;
    return (stairs(n-1)+stairs(n-2)+stairs(n-3));
}
int main()
{
    int n;
    cin >> n;
    int now = stairs(n);
    cout << now;
    return 0;
}