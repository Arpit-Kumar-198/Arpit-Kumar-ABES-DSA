#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rollno;
    float marks;
    student(string n, int r, float m){
        this->name = n;
        this->rollno = r;
        this->marks = m;
    }
};
// void change(student s){
//     s.name = "Shivani";
// }

void change(student* s){
    s->name = "Shivani";
}
int main(){
    // student s("Arpit", 46, 90.0);
    student* s = new student("Arpit", 46, 90.0);
    // cout << s.name << " -> " << s.marks;
    change(s);  
    // change(s);
    // cout << endl << s.name;     // pass by value

    cout << s->name;
    return 0;
}