#include<iostream>
using namespace std;
class abstract              // this is my abstract class
{
public:
    int abstract_ka_var;     
    virtual void fuelMethod() = 0; // pure virtual function 
};

// agar class me ek bhi pure virtual fun hua to class abstarct class ban jayegi 
// abstract class ka koi object nhi banta hai
// dusri classes bs abstract class ko inherit krti hai 
// abstract class me ham ve fun likhte hai ya ve variables define krte hai jo sbhi classes me hona mandatory hai
class Gadi : public abstract
{
public:
    int gadi_ka_milege;
    int gadi_ki_speed;
    void fuelMethod()
    {
        cout << "Gadi ka fuel method" << endl;
    }
};
int main()
{
    // abstract a;      this will give me error
    Gadi bike;
    bike.gadi_ka_milege = 40;
    bike.gadi_ki_speed = 120;
    bike.abstract_ka_var = 10;

    cout << bike.gadi_ka_milege << endl;
    cout << bike.gadi_ki_speed << endl;

    cout << bike.abstract_ka_var << endl;

    bike.fuelMethod();
    
    return 0;
}