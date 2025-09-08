#include<iostream>
using namespace std;
class Bike
{
public:
    int milege;
    int speed;
    static int NumOfBike;
    // Bike (int milege, int speed)        
    // {
    //     this->milege = milege;
    //     this->speed = speed;
    //     cout << "Contructor call hua " << endl;
    // }
    Bike(int m, int s) : milege(m), speed(s){}  // short form
    
     void increaseBike()
    {
        NumOfBike++;
    }
};

int Bike::NumOfBike = 10;   // scope resolution operator
int main()
{
    Bike honda(50,90);
    Bike tvs(45,100);
    // cout << Bike::NumOfBike << endl;
    honda.NumOfBike = 20; // can be modified but can't be reinitialized
    honda.increaseBike();
    cout << honda.milege << " " << honda.speed << endl;
    cout << honda.NumOfBike << endl;

    tvs.increaseBike();
    cout << tvs.milege << " " << tvs.speed << endl;
    cout << tvs.NumOfBike << endl;

    return 0;
}
