#include<iostream>
using namespace std;
class student
{
    public:
        int rollNo;
        static int roll;
        static int getrollNo()
        {
            // return rollNo;      // accessing non static member of class using static function which is not possible, static fun can only access static members
            return roll;            // valid because roll is a static member
        }

};
int student::roll = 96;
int main()
{
    student s1;
    s1.rollNo = 46;
    s1.roll = 56;
    s1.roll = 57;
    cout << s1.getrollNo() << endl;
}