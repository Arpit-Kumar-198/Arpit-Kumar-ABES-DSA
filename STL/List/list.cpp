#include<iostream>
#include<list>      // list library
using namespace std;
int main(){
    list<int> l;            // it is actually a doubley linked list
    list<int> l2 = {1,2,3,4};       // valid
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    for(int i : l) cout << i << " ";
    cout << endl;
    l.push_front(50);   // push 50 in front 
    for(int i : l) cout << i << " ";

    l.pop_front();
    l.pop_back();
    cout << endl;
    for(auto it = l.begin(); it!=l.end(); it++) cout << *(it) << " ";
}

// all the functions size, erase, insert , begin, end , rbegin, rend, front , back are also valid in case of list
// when we declare a list , it means it is a  doubly linked list so l[i] is invalid