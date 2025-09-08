#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cin >> num;

    for(int i = 1; i < sqrt(num); i++)      //sqrt(15) = 3.87298
    {
        if(num%i == 0){
            cout << i << endl;
        }
    }
    for(int i = sqrt(num); i >= 1; i--)
    {
        if(num%i == 0){
            cout << num/i << endl;
        }
    }
    
}