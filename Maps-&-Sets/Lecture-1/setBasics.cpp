#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    unordered_set<int>::iterator it;
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