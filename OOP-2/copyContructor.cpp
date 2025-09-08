#include<iostream>
using namespace std;
class Bike
{
public:
    int milege;
    int speed;
    Bike (int milege, int speed)        
    {
        this->milege = milege;
        this->speed = speed;
        cout << "Contructor call hua " << endl;
    }
    Bike(Bike &b)                        // copy constructor , always call by reference , kyuki call by value hua to infinitely copy constructor call hota rhega    
    {
        this->milege = b.milege;
        this->speed = b.speed;
        cout << "Copy Constructor call hua" << endl;
    }
};
int main()
{
    Bike honda(50,90);

    /*
        Bike tvs;
        tvs = honda            shallow copy
    */
    Bike tvs(honda); // or Bike tvs = honda;      // deep copy
    // now tvs is independent to honda

    cout << tvs.milege << " " << tvs.speed << endl;
    honda.speed = 150;
    cout << tvs.milege << " " << tvs.speed << endl;
    cout << honda.milege << " " << honda.speed << endl;

    return 0;
}
