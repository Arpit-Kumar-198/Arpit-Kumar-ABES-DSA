#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    // 2nd largest number ??
    string str = "634627";
    int x = stoi(str);
    int max = -1;
    int max2 = -1;
    int n = x;
    while(n > 0)
    {
        int num = n%10;
        if(num > max) max = num;
        n = n / 10;
    }
     while(x > 0)
    {
        int num = x%10;
        if(num > max2 && num < max) max2 = num;
        x= x / 10;
    }
    cout << max2;
    return 0;
}