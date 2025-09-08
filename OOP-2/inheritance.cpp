// Inheritance
#include<iostream>
using namespace std;
class Gadi                  // Base class, parent class
{
public:
    int milege;
    int speed;
    string company;
    Gadi()
    {
        cout << "Gadi ka constructor" << endl;
    }
};

class bike : public Gadi        // bike inherit gadi kyuki bike k pas gadi ki property to hogi hi
{                               // child class, derived class
public:
    int handle;
    bike()
    {
        cout << "Bike ka constructor" << endl;
    }
};

class car : public Gadi         // car inherit gadi kyuki car k pas gadi ki property to hogi hi
{
public:
    int stearing;
    car()
    {
        cout << "Car ka constructor" << endl;
    }
};

int main()
{
    bike honda;

    honda.milege =  40;
    honda.speed = 100;
    honda.company = "Honda";

    car maruti;
    maruti.milege = 25;
    maruti.speed  = 120;
    maruti.company = "Maruti";

    return 0;
}