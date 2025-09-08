#include<iostream>
using namespace std;
int main(){
    /* WAP a program to input sides of a triangle and check whether
       a triangle is equilateral, scalene or isosceles triangle.*/
    int a,b,c;
    cout<<"Enter three sides :";
    cin>>a>>b>>c;
    
    if((a==b && b==c && c==a)){
        cout<<"Equilateral triangle.";
    }
    if((a==b && a!=c && b!=c) || (b==c && b!=a && c!=a) || (a==c && a!=b && c!=b)){
        cout<<"Isosceles triangle.";
    }
    if(a!=b && b!=c && c!=a){
        cout<<"Scalene triangle.";
    }
    



}