/*
     Write a program to calculate the reverse of a given positive integer using recursion
*/
#include<iostream>
#include<cmath>
using namespace std;
int digit(int n)
{
    if(n == 0) return 1;
    else return (1+digit(n/10));
}
int rev(int n, int digit){
    if(n == 0) return 0;
    else return (n%10 * pow(10,digit-1) + rev(n/10, digit-1));
}
int main()
{
    int n;
    cin >> n;
    cout << rev(n,digit(n));
    return 0;
}
/*
    #include<iostream>
#include<cmath>
using namespace std;
int rev(int x, int n)
{
    if(n == 0) return x;
    else return (x*10+(n%10),rev(x*10+(n%10), n/10));
    
}
int main()
{
    int n;
    cin >> n;
    cout << rev(0,n);
    return 0;
}
*/