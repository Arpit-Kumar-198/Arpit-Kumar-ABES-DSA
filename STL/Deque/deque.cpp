#include<iostream>
#include<deque>      // deque library
using namespace std;
int main(){
    deque<int> d;
    // deque => doubly ended queue    d  dequeue : poping element from queue

    // all functions are same as list and vector

    deque<int> d2 = {1,2,3,4};       // valid
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);

    for(int i : d) cout << i << " ";
    cout << endl;
    d.push_front(50);   // push 50 in front 
    for(int i : d) cout << i << " ";

    d.pop_front();
    d.pop_back();
    cout << endl;
    for(auto it = d.begin(); it!=d.end(); it++) cout << *(it) << " ";
    cout << endl;
    for(int i = 0; i < d2.size(); i++) cout << d2[i] << " ";
    // here random access is possible because it is implemented using arrays
    // list is implemented using linked list hence random access not possible 
}

