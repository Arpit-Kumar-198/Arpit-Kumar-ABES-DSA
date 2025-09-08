#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Friend function for operator overloading
    friend Complex operator+(const Complex&, const Complex&);

    // Function to display complex number
    void display() {
        cout << real << " + i" << imag << endl;
    }
};

// This is the friend function definition
Complex operator+(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex a1(2, 3);
    Complex a2(4, 5);
    
    Complex a3 = a1 + a2;  // Calls the friend operator+ function

    cout << "First complex number: ";
    a1.display();
    cout << "Second complex number: ";
    a2.display();
    cout << "Sum: ";
    a3.display();

    return 0;
}
