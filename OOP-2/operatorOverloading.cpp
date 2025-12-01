#include<iostream>
using namespace std;
class complexNo
{
public:
    int img;
    int real;
    complexNo operator +(const complexNo &t)          // operator overloading
    // Here we write const for saftey so that this function do not chnage becoz it is passed by reference
    {
        complexNo c;
        c.img = t.img+this->img;    //this->img means a1.img
        c.real = t.real+this->real;
        return c;
    }
};
// . , :: , ?: , sizeof can't be overloaded
int main()
{
    complexNo a1,a2;
    a1.real = 2;
    a1.img = 3;

    a2.real = 1;
    a2.img = 2;

    cout << a1.real << " + i" << a1.img << endl;
    cout << a2.real << " + i" << a2.img << endl;
    complexNo a3 = a1+a2;       // a1 (calling object) and a2 (passed object)
    // internally a3 = a1.operator+(a2);

    cout << a3.real << " + i" << a3.img << endl;
    return 0;
}