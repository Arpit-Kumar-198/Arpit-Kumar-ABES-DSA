#include<iostream>
using namespace std;
class skills
{
public:
    string skill;
};

class student
{
private:
    string name;
    string branch;
    int rollNo;
    int percentage;
    skills tech;

public:
    // setter
    void setname(string s){
        name = s;
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

    void setskill(string s)
    {
        this->tech.skill = s;    // this-> is not necessary
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

    string getskill()
    {
        return tech.skill;
    }
};

student* highmarks(student* a, student* b)
{
    if(a->getpercentage() > b->getpercentage()) return a;
    else return b;
}

int main()
{
    student* arpit = new student;   // Here memory is allocated at runtime
    student* shivani = new student;

    arpit->setname("Arpit");
    arpit->setrollNo(46);
    arpit->setbranch("CSE");
    arpit->setpercentage(91);

    arpit->setskill("DSA");

    shivani->setname("Shivani");
    shivani->setrollNo(43);
    shivani->setbranch("BCA");
    shivani->setpercentage(73);

    shivani->setskill("WEBD");

    student* temp = highmarks(arpit,shivani);

    cout << temp->getname() << " has high marks" << endl;

    cout << arpit->getskill() << endl;
    cout << shivani->getskill() << endl;

}