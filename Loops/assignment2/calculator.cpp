#include<iostream>
using namespace std;
int main(){
    
        float a,b;
        char ch;
        cout<<"Enter the problem : ";
        cin>>a>>ch>>b;

        switch(ch){
        case '+' :
        cout<<a+b;
        break;

        case '-' :
        cout<<a-b;
        break;

        case '*' :
        cout<<a*b;
        break;

        case '/' :
        cout<<a/b;
        break;
        default:
        cout << "Invalid expression";
        break;
    }
    return 0;
}