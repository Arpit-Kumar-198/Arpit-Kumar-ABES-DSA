#include<iostream>
using namespace std;
class Bike{
    public:
        
        int milage;
        int speed;
        Bike(){

        }
};

class honda : public Bike
{
public:
    string name;
    int price;
   
};
int main()
{
    Bike b;
    b.num = 0;
    cout << b.milage << endl
         << b.speed << endl
         << b.num << endl;

    return 0;
}
