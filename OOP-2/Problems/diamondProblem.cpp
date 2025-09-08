//Very famous interview question. 

/*
    When 2 instances of base classes are present in the derived class

    B derives A , C derives A
    and D derives B+C.

    Now D has 2 instances of A
*/

#include<iostream>
using namespace std;
class A
{
public:
    int a_ka_var = 10;
    A()
    {
        cout << "A ka constructor" << endl;
    }
};

class B : virtual public A
{
public:
    int b_ka_var = 20;
    B()
    {
        cout << "B ka constructor" << endl;
    }
};

class C : virtual public A
{
public:
    int c_ka_var;
    C()
    {
        cout << "C ka constructor" << endl;
    }
};

class D : public B, public C
{
public:
    int d_ka_var;
    D()
    {
        cout << "D ka constructor" << endl;
    }
};

int main()
{
    D d;
    // d.a_ka_var = 10;         this will give error because D has 2 intances of A

    // to solve this problem we have 2 solution 
    // 1st :  d.B::a_ka_var = 10;   or d.C::a_ka_var = 10;
   // 2nd : we use virtual => class B : virtual public : A same for class C : virtual public A


   cout << d.a_ka_var << endl;
    return 0;
}