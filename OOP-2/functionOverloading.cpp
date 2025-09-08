#include<iostream>
#include<typeinfo>
using namespace std;
class Area{
    public:
 
    void area(float r){
        cout << 3.14 * r * r << endl;
    }
    void area(int l, int b){
        cout << l * b << endl;
    }
    void area(int a){
        cout << a * a << endl;
    }
};
int main()
{

    return 0;
}