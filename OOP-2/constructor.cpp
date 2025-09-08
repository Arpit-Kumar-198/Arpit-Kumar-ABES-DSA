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
};
int main()
{
    Bike honda(50,90);
    Bike tvs(45,100);

    cout << honda.milege << " " << honda.speed << endl;
    cout << tvs.milege << " " << tvs.speed << endl;
    return 0;
}
// 1. default constructor -> compiler ko pehle se pta hai for example int a , a will take memory not the int 
// 2. parameterized constructor 
// 3. copy constructor