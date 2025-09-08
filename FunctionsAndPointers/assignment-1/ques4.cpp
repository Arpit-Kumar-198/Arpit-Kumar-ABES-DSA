/*
    WAF to count digits of a number and then print its square.
*/
#include<iostream>
using namespace std;
int countDigit(int n)
{
    int c = 0;
    while(n>0)
    {
        n /= 10;
        c++;
    }
    return c;
}
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int d = countDigit(n);
    cout<<"Number of digits = "<<d<<"\n"<<"Square = "<<d*d;
    return 0;
    /*  ques-7 =>
    
        The same function name can be used for different functions without any conflict if and only if 
        they either have different data types for arguments {void fun(int) , void fun(float)} or different
        number of arguments {void fun(int a, int b) , void fun(int n)}. Same function name can not be 
        used if functions differ only by their return type because the compiler would not then know
        which function is to be used.
    */
}