#include<iostream>
using namespace std;

class A
{
private:
    int a_ka_private;
public:
    friend void show(A &a); // Only declaration of friend function in class 
    friend class prime; // Declare class 'prime' as a friend
};

void show(A &a)
{
    a.a_ka_private = 10; // Modify private member variable
    cout << a.a_ka_private << endl; // Access and print private member
}

class prime
{
public:
    void show2(A &a)
    {
        cout << a.a_ka_private << endl; // Access private member of A directly
    }
};

int main()
{
   A a;  // Create an object of class A
   show(a);  // Call friend function show to modify and print 'a_ka_private'
   
   prime b;  // Create an object of class prime
   b.show2(a);  // Call show2 to access and print 'a_ka_private'

   
   return 0;
}
