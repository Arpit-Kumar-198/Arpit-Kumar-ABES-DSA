#include<iostream>
using namespace std;
class student
{
    public:     // by default it is private:
    string name;
    string branch;
    int rollNo;
    int percentage;
    void displayName(){
        cout << name << endl;
    }
};

int main()
{
    student arpit;
    arpit.name = "Arpit Kumar";
    arpit.branch = "CSE";
    arpit.rollNo = 46;
    arpit.percentage = 91;

    cout << arpit.name << endl;
    cout << arpit.branch << endl;
    cout << arpit.rollNo << endl;
    cout << arpit.percentage << endl;
    arpit.displayName();
    
}