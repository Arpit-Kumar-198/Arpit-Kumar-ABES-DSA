#include<iostream>
using namespace std;
int main(){
    pair<string,int> p1;
    p1.first = "Arpit";
    p1.second = 46;

    cout << p1.first << " " << p1.second << endl;

    pair<string,int> p2 = p1;       // its a deep copy
    cout << p2.first << " " << p2.second << endl;
    p1.first = "Shivani";       
    cout << p2.first << " " << p2.second << endl;

    pair<int,int> p3 = {20,46};
    cout << p3.first << " " << p3.second;
}