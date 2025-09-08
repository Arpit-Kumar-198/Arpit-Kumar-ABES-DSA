#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    set<int>::iterator it;
    // implemented using Red black tree (balanced bst)
    // tc of everything is logn
    // leetcode 1814
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    cout << s.size() << endl;

    s.erase(30);

    for (auto it : s)
        cout << it << " ";
    cout << endl;

    int tgt = 60;
    if(s.find(tgt) != s.end()){     // s.find() return pointer to the element found otherwise it return s.end() pointer 
        cout << "Found : " << *(s.find(tgt)) << endl;
    }
    else
        cout << "Not found"<< endl;
    return 0;
}