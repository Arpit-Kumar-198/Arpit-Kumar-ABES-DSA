#include<iostream>
using namespace std;
class student
{
private:
    string name;
    string branch;
    int rollNo;
    int percentage;

public:
    // setter
    void setname(string s){
        this->name = s;
    }
    void setbranch(string s)
    {
        branch = s;
    }
    void setrollNo(int r)
    {
        rollNo = r;
    }
     void setpercentage(int p)
    {
        percentage = p;
    }

    // getter
    string getname(){
        return name;
    }
    string getbranch()
    {
        return branch;
    }
    int getrollNo()
    {
        return rollNo;
    }
    int getpercentage()
    {
        return percentage;
    }
};

student fun(student a, student b)
{
    if(a.getpercentage() > b.getpercentage()) return a;
    else return b;
}

int add(student a, student b)
{
   return a.getpercentage()+b.getpercentage();
}
int main()
{
    student *arpit = new student;   // Here memory is allocated at runtime
    student shiavni;                // Here memory is allocated at compile time

    (*arpit).setname("Arpit");
    (*arpit).setrollNo(46);
    arpit->setbranch("CSE");
    arpit->setpercentage(91);

    cout << (*arpit).getname() << endl;
    cout << (*arpit).getbranch() << endl;
    cout << arpit->getrollNo() << endl;
    cout << arpit->getpercentage() << endl;



}