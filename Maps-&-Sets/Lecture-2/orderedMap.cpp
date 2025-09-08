#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    // implemented using Red black tree (balanced bst)
    // tc of everything is logn
    m[1] = 20;
    m[2] = 10;
    m[3] = 30;
    
    for (auto it : m)
        cout << it.first << " : " << it.second << endl;
    cout << endl;

       return 0;
}