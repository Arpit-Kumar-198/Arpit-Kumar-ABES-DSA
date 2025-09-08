#include<iostream>
using namespace std;
class complexNo
{
public:
    int img;
    int real;
    complexNo operator +(complexNo &t)          // operator overloading
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

    cout << a3.real << " + i" << a3.img << endl;
    return 0;
}