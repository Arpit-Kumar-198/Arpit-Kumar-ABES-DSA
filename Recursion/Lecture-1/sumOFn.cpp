#include<iostream>
using namespace std;
void sum(int x, int n)
{
    if(n == 0) {
        cout << x;
        return;
    }
    else return (sum(x+n, n-1));
}
int main()
{
    int n;
    cin >> n;
    sum(0, n);
    return 0;
}
// Tail Recursion 
// In tail recursion, the recursive call happens after all computations in the function.

//The function performs all computations before making the recursive call.