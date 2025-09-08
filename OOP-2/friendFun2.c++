#include<iostream>
using namespace std;

class first{
private:
    int var1;
    int var2;
public:
    friend void happy(first &a);
    friend class test;
    
};
void happy(first &a){
    a.var1 = 34;
    cout << "\nHappy " << a.var1;
}
class test {
public:
    int var3;
    void show(first &a){
        a.var1 = 789;
        a.var2 = 90;
        cout << a.var1 <<  " " << a.var2;
    }
};
int main(){
    test obj1;
    obj1.var3 = 10;
    first a;

    obj1.show(a);
    happy(a);
    return 0;
}