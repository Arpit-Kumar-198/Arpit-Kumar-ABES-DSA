/*
    pridict the output of the following snippet.
*/
#include<iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;
    cout<<&a<<endl<<ptr<<endl<<*ptr;
    return 0;
    /*
        The program is correct and will compile but might result in run time error. this is
        because ptr will have a garbage address which might even point to a location which
        does not belong to our program and hence might result in segmentation falut when we
        are trying to access it. 
    */
}