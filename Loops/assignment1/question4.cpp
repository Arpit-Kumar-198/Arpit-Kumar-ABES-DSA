#include<iostream>
using namespace std;
int main(){
    // Take input three points and wap to check if all the three points fall on one straight line.
    int x1,x2,x3;
    int y1,y2,y3;
    cout<<"1st point :"; cin>>x1>>y1;
    cout<<"2nd point :"; cin>>x2>>y2;
    
    cout<<"3rd point :"; cin>>x3>>y3;

    float slope1=(y2-y1)/(x2-x1);
    float slope2=(y3-y2)/(x3-x2);

    if(slope1 == slope2){
        cout<<"Poins fall on one straight line";
    }
    else{
        cout<<"Condition not match";
    }
}