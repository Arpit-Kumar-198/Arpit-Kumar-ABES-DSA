#include<iostream>
using namespace std;
class teacher
{
    public:     
    string name;
    string subject;
    static int id;
    void display(){
        cout << "Teacher" << endl;
    }
  
};
class student : public teacher{
    public:
    int roll;
    string college;
    void display(){
        cout << "Student" << endl;
    }
};

int main()
{
    student* s1 = new student;
    s1->display();
    teacher* t1 = new teacher;
    cout << t1->id;
}