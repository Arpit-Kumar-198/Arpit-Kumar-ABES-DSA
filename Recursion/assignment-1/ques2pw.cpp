#include<iostream>
using namespace std;
int sumOfOdd(int a, int b)
{
    if(a > b) return 0;
    else{
        if(a%2 != 0) return (a + sumOfOdd(a+1, b));
        else return (sumOfOdd(a+1,b));
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = sumOfOdd(a,b);
    cout << sum;
    return 0;
}