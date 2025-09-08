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
int main()
{
    student arpit;
    arpit.setname("Arpit");
    arpit.setbranch("CSE");
    arpit.setrollNo(46);
    arpit.setpercentage(91);


    cout << arpit.getname() << endl;
    cout << arpit.getbranch() << endl;
    cout << arpit.getrollNo() << endl;
    cout << arpit.getpercentage() << endl;
}