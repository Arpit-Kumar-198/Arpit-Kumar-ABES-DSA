#include<iostream>
using namespace std;
int main(){
    // Take input a point (x,y) wap to find out if it lies on the x axis or y axis or at the origin.
    int x,y;
    cout<<"Enter the x-y coordinates of the point :";
    cin>>x>>y;
    
    if(x==0 && y!=0){
        cout<<"Point lies on y axis.";
    }
    if(y==0 && x!=0){
        cout<<"Point lies on x axis.";
    }
    if(x==0 && y==0){
        cout<<"Point lies on origin.";
    }
    if(x!=0 && y!=0){
        cout<<"Point lies on x-y plane.";
    }
    
    
}