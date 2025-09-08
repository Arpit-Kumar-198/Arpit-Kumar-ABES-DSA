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
    student arpit;
    arpit.setname("Arpit");
    arpit.setbranch("CSE");
    arpit.setrollNo(46);
    arpit.setpercentage(91);

    student shivani;
    shivani.setname("shivani");
    shivani.setbranch("BCA");
    shivani.setrollNo(45);
    shivani.setpercentage(73);

    student highPercentage = fun(arpit,shivani);
    cout <<  highPercentage.getname() << endl;
    cout << highPercentage.getpercentage() << endl;

    cout << endl;

    int totalmarks = add(arpit, shivani);
    cout << totalmarks << endl;

}