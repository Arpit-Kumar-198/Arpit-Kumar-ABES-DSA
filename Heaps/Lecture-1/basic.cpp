#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq; // by default max heap is created 
    priority_queue< int, vector<int> , greater<int> > pq2; // min heap
    pq.push(10);
    pq.push(40);
    pq.push(20);
    pq.push(30);

    cout << pq.top() << endl;   // 40 max element
    pq.pop();
    cout << pq.top() << "\n";   // after deletion 30 is max element

    cout << endl;
    
    pq2.push(10);
    pq2.push(40);
    pq2.push(20);
    pq2.push(30);

    cout << pq2.top() << endl;   // 10 min element
    pq2.pop();
    cout << pq2.top() << "\n";   // after deletion 20 is min element


    return 0;
}
