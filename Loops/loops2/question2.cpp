#include<iostream>
using namespace std;
int main(){
    // WAP to print sum of digits of a given number.
    int n, sum = 0, x;
    cout<<"Enter the number : ";
    cin>>n;
    x = n;
    while(n > 0)
    {
        sum += n%10;
        n /= 10;
    }
    cout<<"Sum of the number "<<x<<" is "<<sum;
}