#include<iostream>
using namespace std;
int main(){
    //Display this AP- 1,3,5,7,9... upto 'n' terms.

    // int n;
    // cout<<"Enter 'n' : ";
    // cin>>n;
    // for(int i=1; i<=1+2*(n-1); i+=2){
    //     cout<<i<<endl;

    // }
    // nth term of AP = a + (n-1)d


    int n;
    cout<<"Enter 'n' : ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a = a + 2;
    }
}