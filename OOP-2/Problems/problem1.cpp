#include<iostream>
using namespace std;
class student
{
    public:
        const int rollNo;
        int age;
        student(int r, int a) : rollNo(r), age(a) {} // initializes the const member rollNo before the constructor body runs
        
        // {
        //      this->rollNo = r;        this will give error because rollNo is const and we initialize it as ( const int rollNo = 100 )
        //      this->age = a;
        // }
};

int main()
{
    student s1(100,23);
    cout << s1.rollNo << endl;
}