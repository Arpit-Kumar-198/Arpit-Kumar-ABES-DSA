// Inheritance
#include<iostream>
using namespace std;
class Gadi                 
{
public:
    int milege;
    int speed;
    string company;
    int same;
    Gadi()
    {
        cout << "Gadi ka constructor" << endl;
    }
};

class bike : public virtual Gadi   
{                             
public:
    int handle = 90;
    int same;
    bike()
    {
        cout << "Bike ka constructor" << endl;
    }
};

class car : public Gadi    
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

    car maruti;
    maruti.milege = 25;
    maruti.speed  = 120;
    maruti.company = "Maruti";
    cout << maruti.milege << endl;
    cout << maruti.speed << endl;

    cout << maruti.company << endl;

    cout << maruti.same << endl;
    

    return 0;
}