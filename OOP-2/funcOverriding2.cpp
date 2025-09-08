#include<iostream>
using namespace std;
class A
{
public:
    int a_ka_var;
    int a_ka_var2;
    void show()           
    {
        cout << "A ka show" << endl;
    }
};

class B : public A
{
public:
    int b_ka_var;
    int b_ka_var2;
    void show()
    {
        cout << "B ka show" << endl;
    }
};


class C : public B
{
public:
    void show()
    {
        cout << "C ka show" << endl;
    }
};
int main()
{
    
    A a;
    B b;
    C c;
    
    a.show();
    b.show();
    c.show();
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    return 0;   
}


// virtual lgane se ek virtual pointer banta hai
// *vptr(sirf object ka *vptr hota hai)  and ek table banti hai jisme us prticular class k virtual functinons store ho jate hai 
// runtime pr compiler us particular class k object k virtual pointer ki help se us table me function ko dundhta hai

// A a; a class me 2 int hai to 8 byte + ek *vptr 8 byte  == 16 byte
// B b; b class me 2 int a ke and 2 int b ke 16 byte + *vptr 8 byte == 24 bytes