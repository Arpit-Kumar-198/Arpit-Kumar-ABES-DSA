#include<iostream>
using namespace std;
int main(){
    int n; cout<<"Enter the number : ";
    cin>>n;
    bool flag = true;
    for(int i=2; i<=(n-1); i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n==1) cout<<"1 is neither prime nor composite.";
    else if(flag == true) cout<<n<<" is prime.";
    else cout<<n<<" is composite";

    return 0;
}