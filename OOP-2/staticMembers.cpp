#include<iostream>
using namespace std;
void fun()
{
    static int a = 10;      // only 1 time initialize
    cout << a << endl;
    a++;
}

int b = 25;
int main()
{
    fun();
    fun();
    fun();
    
    cout << endl;
    int b = 20;
    cout << b << endl;
    cout << ::b << endl;        // ::b i am accessing the b outside the main function

    return 0;
}