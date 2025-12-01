#include<iostream>
using namespace std;
class A
{
public:
    int a_ka_var = 90;
    virtual void show()             // problem solved       virtual means run time pe kam kro
    {
        cout << "A ka show" << endl;
    }
};

class B : public A
{
public:
    int b_ka_var;
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

    // compiler ka point of view -> a A type ka hai to A ka show call hona chiye 
    // runtime point of view -> a store address of b to B ka show call hona chiye 
    // contradiction
    
    // Is problem ko solve krne k liye aate hia -> Virtual Functions
    A *a;
    B b;
    a = &b;     // a store address of b to B ka show call hona chiye
    a->show();  // lekin A ka show hi call hoga
    a = new A;
    a->show();

    B *b2;
    b2 = new C;
    b2->show();

    // B *b3;
    // b3 = &a;         not allowed 

    return 0;   
}

// normal functions ki binding hoti hai compile time pe 
// virtual functios ki binding hoti hai run time pe 