#include<iostream>
using namespace std;
class Bike
{
public:
    int milege;
    int speed;
    Bike (int milege, int speed)        // we made this construtor , constructor is similar to function, its data type will be same as of class
    {
        this->milege = milege;
        this->speed = speed;
        cout << "Contructor call hua " << endl;
    }
    ~Bike()                             // Destructor
    {
        cout << "Destructor call hua" << endl;
    }
};
int main()
{
    Bike honda(50,90);
    Bike tvs(45,100);

    if(true)
    {
        Bike bmw(30,120);
        cout << bmw.milege << " " << bmw.speed << endl;
    }
    // when the if statement complete " destructor call hoga " , jese hi ilaka {} khtm destructor call hoga 
    cout << honda.milege << " " << honda.speed << endl;
    cout << tvs.milege << " " << tvs.speed << endl;
    return 0;
}
