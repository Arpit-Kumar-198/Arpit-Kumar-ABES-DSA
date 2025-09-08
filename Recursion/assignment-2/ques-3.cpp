/*
  Given an integer num, return the number of steps to reduce it to zero. In one step, if the
current number is even, you have to divide it by 2, otherwise, you have to subtract 1
from it. [Leetcode 1342]
*/
#include<iostream>
using namespace std;
int steps(int n)
{
    if(n == 0) return 0;
    else
    {
        if(n%2 == 0) return (1+steps(n/2));
        else return (1+steps(n-1));
    }
}
int main()
{
    int num;
    cin >> num;
    cout << steps(num);
    return 0;
}