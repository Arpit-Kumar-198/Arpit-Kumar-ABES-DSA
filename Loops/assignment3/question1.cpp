#include<iostream>
using namespace std;
int main(){
    // Print the table of 'n' is an integer which the user will input.
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=n; i<=(n*10); i+=n){
        cout<<i<<endl;
    }
}