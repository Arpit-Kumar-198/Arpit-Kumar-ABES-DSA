#include<iostream>
using namespace std;
int main(){
    /*WAP to input month number & print total number of days in month using switch case.*/

    int x; cout<<"Enter month number :"; cin>>x;

    switch(x){
        case 1:
        cout<<"Number of days :"<<31;
        break;

        case 2:
        cout<<"Number of days :"<<28;
        break;

        case 3:
        cout<<"Number of days :"<<31;
        break;

        case 5:
       cout<<"Number of days :"<<31;
        break;

        case 7:
      cout<<"Number of days :"<<31;
        break;

        case 8:
       cout<<"Number of days :"<<31;
        break;

        case 10:
        cout<<"Number of days :"<<31;
        break;

        case 12:
        cout<<"Number of days :"<<31;
        break;
        
         default:
        cout<<"Number of days :"<<30;
    }
}