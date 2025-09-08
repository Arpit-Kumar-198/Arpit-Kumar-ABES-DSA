#include <iostream>
using namespace std;

class A {
private:
    int a_ka_private; // Not accessible outside the class   , cant inherit
protected:
    int a_ka_protected; // Accessible in derived classes or child class , can be inherit
public:
    int a_ka_public; // Accessible everywhere   , can be inherit
};

class B : public A { // Public inheritance
public:
    int b_ka_public;
    void show()
    {
        a_ka_protected = 30;
        cout << a_ka_protected << endl;
    }
};

// If I make a class C that inherit B that will be example of multi level inheritance
int main() {
    B b;
    b.b_ka_public = 10; // Accessing public member of class B
    b.a_ka_public = 80; // Accessing inherited public member of class A

    b.show();
    // Attempting to access private or protected members will result in errors:
    // b.a_ka_private = 20;  // ERROR: Not accessible
    // b.a_ka_protected = 30; // ERROR: Not accessible from main()

    cout << "b.b_ka_public: " << b.b_ka_public << endl;
    cout << "b.a_ka_public: " << b.a_ka_public << endl;

    return 0;
}
