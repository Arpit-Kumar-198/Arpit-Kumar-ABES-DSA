/*
    choose the correct option
*/
#include<iostream>
using namespace std;
int main()
{
    int a = 15, b = 20, c = 25;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
    int *ptr3 = &c;
    cout << a << endl << ptr3-ptr;
    // Which one is correct ? 
    /*
        1. ptr now points to b
        2. ptr2 now points to a
        3. a gets value b   => true
        4. b gets value of a
    */
    return 0;
}