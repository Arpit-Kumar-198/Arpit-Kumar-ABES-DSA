#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cin >> num;


    bool flag = true;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num%i == 0){
            flag = false;
            break;
        }
    }
    if(num == 1) cout << "Not Prime"<<endl;
    else if(flag == true) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;
}