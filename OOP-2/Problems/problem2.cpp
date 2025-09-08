#include<iostream>
using namespace std;
class student
{
    public:
        int rollNo;
        int age;
      
};

int main()
{
    student s1;
    student s2 = s1;    // deep copy so output garbage values
    s1.rollNo = 46;
    s1.age = 19;
    

    cout << s2.rollNo << " " << s2.age << endl;
}